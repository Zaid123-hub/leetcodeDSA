
class Solution {
public:
int levels(TreeNode* root){
        if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
    }

     void nthlevelreverse(TreeNode* root,int curr,int level,vector<int>& v){
        if(root == NULL) return; //bsase case
        if(curr == level){
            v.push_back(root->val);
            return;
        }
           nthlevelreverse(root->left,curr+1,level,v);
         nthlevelreverse(root->right,curr+1,level,v);

     }



    void nthlevel(TreeNode* root,int curr,int level,vector<int>& v){
        if(root == NULL) return; //base case
             if(curr == level){
                 v.push_back(root->val);
                  return;
             }
               nthlevel(root->right,curr+1,level,v);
         nthlevel(root->left,curr+1,level,v);
           
            }
            void lorder(TreeNode* root,vector<vector<int>>& ans){
            int n = levels(root);
            for(int i=1;i<=n;i++){
                vector<int> v;
                if(i%2==0){
                nthlevel(root,1,i,v);
                }
                else{
                    nthlevelreverse(root,1,i,v);
                }
                ans.push_back(v);
                
            }
        }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lorder(root,ans);
        return ans;
    }
};