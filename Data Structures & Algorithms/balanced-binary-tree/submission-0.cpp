
class Solution {
public:

    int dfsmaxheight(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }

        int le = dfsmaxheight(root->left);
        if(le == -1) return -1;

        int ri = dfsmaxheight(root->right);
        if(ri == -1) return -1;

        if(abs(le - ri) > 1) {
            return -1;
        }

        return 1 + max(le, ri);
    }

    bool isBalanced(TreeNode* root) {
        return dfsmaxheight(root) != -1;
    }
};
