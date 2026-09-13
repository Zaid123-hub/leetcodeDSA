class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        for(auto x:mp){
            if(x.second==3) {
                int pehla = -1;
                int second = -1;
                int third = -1;
                for(int i=0;i<n;i++){
                    if(nums[i]==x.first) {
                        if(pehla==-1) pehla = i;
                        else if(second==-1) second = i;
                        else third = i;
                    }
                }
                if(second-pehla==third-second) count++;
            }
        }
        return count;
    }
};