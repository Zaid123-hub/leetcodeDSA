class Solution {
public:
       
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
         vector<int> ans;
        ListNode* prev = head;
        ListNode* curr = head->next;
        int pos = 1;
        if(curr->next==NULL) return{-1, -1};
        while(curr->next!=NULL){
            if(curr->val > curr->next->val && curr->val>prev->val) ans.push_back(pos+1);
            else if(curr->val<curr->next->val && curr->val<prev->val) ans.push_back(pos+1);
                
            prev = curr;
            curr = curr->next;
            pos++;
            
        }
        
      
        int maxdis;
        int mindis = INT_MAX;
        if(ans.size()<2) {
          return {-1,-1};
        }
        else maxdis = abs(ans.front()-ans.back());
       for(int i=1;i<ans.size();i++){
            mindis = min(mindis,abs(ans[i-1]-ans[i]));
       }
       
       return {mindis,maxdis};
    }
};