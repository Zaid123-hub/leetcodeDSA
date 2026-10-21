class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        // prefix sum
        vector<int> ps(n);
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        // ab map bnao
        unordered_map<int,int> mp; // prefix sun , frequency
        for(int j=0;j<n;j++){
            if(ps[j]==k) count++;
            int val = ps[j]-k;
            if(mp.find(val)!=mp.end()){
                count+=mp[val]; 
            }
             mp[ps[j]]++;
        }

        return count;
    }
};