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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>temp;
        if(root == nullptr){
            return temp;
        }
        vector<int>ans = postorderTraversal(root->left);
        for(int i =0; i<ans.size(); i++){
            temp.push_back(ans[i]);
        }
         ans = postorderTraversal(root->right);
         for(int i =0; i<ans.size(); i++){
            temp.push_back(ans[i]);
         }
         temp.push_back(root->val);
         return temp;
    }
};