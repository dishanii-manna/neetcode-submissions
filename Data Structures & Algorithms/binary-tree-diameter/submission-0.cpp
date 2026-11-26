/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int maxi =0;
      int maxtree(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int lh = maxtree(root->left);
        int rh = maxtree(root->right);
        maxi = max(maxi, lh+rh);
        return 1+ max(lh, rh);

        
    }
   
    int diameterOfBinaryTree(TreeNode* root) {
     maxtree(root);
     return maxi;
        
    }
};
