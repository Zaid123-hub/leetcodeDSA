class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = k-1;
        unordered_map<int,int> mp;
      while(r<n){
        unordered_set<int> st;
        for(int i=l;i<=r;i++){
            st.insert(nums[i]);
        }
        for(auto x: st){
            mp[x]++;
        }
        l++;
        r++;
      }
    int ans = -1;
      for(auto x : mp) {
            if(x.second == 1) {
                ans = max(ans, x.first);
            }

        }
       return ans;
    }
};