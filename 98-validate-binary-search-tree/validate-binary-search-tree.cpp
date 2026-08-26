class Solution {
public:
  long long maxleft(TreeNode* root){
    if(root==NULL) return LLONG_MIN;
    long long left = maxleft(root->left);
    long long right = maxleft(root->right);
    return max((long long)(root->val),max(left,right));
  }


  long long minright(TreeNode* root){
    if(root==NULL) return LLONG_MAX;
    long long left = minright(root->left);
    long long right = minright(root->right);
    return min((long long)(root->val),min(left,right));
  }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
      long long maxi = maxleft(root->left);
      long long mini = minright(root->right);
      if((long long)(root->val)<=maxi || (long long)(root->val)>=mini) return false;
      else return isValidBST(root->left) && isValidBST(root->right);
    }
};