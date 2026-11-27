class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> temp;

        if(root == nullptr){
            return temp;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()){

            int size = q.size();

            vector<int> ans(size);

            for(int i = 0; i < size; i++){

                TreeNode* node = q.front();
                q.pop();

                int index;

                if(leftToRight){
                    index = i;
                }
                else{
                    index = size - 1 - i;
                }

                ans[index] = node->val;

                if(node->left != nullptr){
                    q.push(node->left);
                }

                if(node->right != nullptr){
                    q.push(node->right);
                }
            }

            temp.push_back(ans);

            leftToRight = !leftToRight;
        }

        return temp;
    }
};