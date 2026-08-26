class Solution {
public:
 void insert(TreeNode* root, int val){
     if(root->val>val){ //go left
            if(root->left == NULL) { // attach it here
                TreeNode* temp = new TreeNode(val);
                root->left = temp;
                
            }
            else insert(root->left,val);
     }
            else{
                if(root->right == NULL) { // attach it here
                TreeNode* temp = new TreeNode(val);
                root->right = temp;
                
            }
            else{ // right jao
                insert(root->right,val);
            }
            }

 }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) {
            root = new TreeNode(val);
        return root;
        }
        insert(root,val);
        
            return root;
        
    }
};