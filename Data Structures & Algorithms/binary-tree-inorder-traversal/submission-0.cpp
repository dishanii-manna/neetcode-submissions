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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>temp;
        if(root == nullptr){
            return temp;
        }
        vector<int>ans = inorderTraversal(root->left);
        for(int i =0; i<ans.size(); i++){
            temp.push_back(ans[i]);
        }
        temp.push_back(root->val);
        ans = inorderTraversal(root->right);
       for(int i =0; i<ans.size(); i++){
            temp.push_back(ans[i]);
        }
        
        return temp;
    }
};