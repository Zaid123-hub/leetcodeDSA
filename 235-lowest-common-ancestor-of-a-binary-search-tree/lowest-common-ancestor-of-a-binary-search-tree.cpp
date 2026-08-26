class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root->val>q->val && root->val>p->val) return lowestCommonAncestor(root->left, p,q); // right me bst tree me root se bada hi milega
         else if(root->val<q->val && root->val<p->val) return lowestCommonAncestor(root->right, p,q); // left me bst tree me root se chota hi milega
    else return root;
    }
};