class Solution {
public:
TreeNode* helper(TreeNode* root){
            if(root==NULL) return NULL;
            TreeNode* temp = root->left ;
             root->left = root->right;
            root->right=temp;
          
            helper(root->left);
            helper(root->right);
            return root;

}
    TreeNode* invertTree(TreeNode* root) {
       return helper(root);
       
    }
};