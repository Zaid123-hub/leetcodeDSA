class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,vector<int>>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &x : mp){
            int num = x.first;
            vector<int> v = x.second;
            if(v.size() == 3 && ((v[1]-v[0]) == (v[2]-v[1]))){
                ans ++;
            }
        }
        return ans;
    }
};