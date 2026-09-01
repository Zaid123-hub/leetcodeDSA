class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        if(left == 0) return 1 + right;
        if(right == 0) return 1 + left;
        int levels = 1+min(left,right);
        return levels;
    }
};