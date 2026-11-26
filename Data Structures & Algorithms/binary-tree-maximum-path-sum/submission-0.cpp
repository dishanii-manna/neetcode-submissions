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
int maxi = INT_MIN;
int maxtree(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    TreeNode* node = root;
    int lh =maxtree(root->left);
    int rh = maxtree(root->right);
    maxi = max(maxi, node->val+ max(0,lh)+ max(0,rh));
    return node->val + max( 0, max(lh, rh));
    
}
    int maxPathSum(TreeNode* root) {
        maxtree(root);
        return maxi;


    }
};
