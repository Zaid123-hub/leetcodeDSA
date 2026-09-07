class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> nnums(n);
        vector<int> pre(n);
        mp[0] = -1;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) nnums[i] = -1;
            else nnums[i] = 1;

        }
        pre[0] = nnums[0];
        for(int i=1;i<n;i++){
            pre[i] = nnums[i]+pre[i-1];
        }
        for(int i=0;i<n;i++){
            if(mp.find(pre[i])!=mp.end()){
                    ans = max(ans,i-mp[pre[i]]);
            }
           else  mp[pre[i]] = i;
        }
        return ans;
    }
};