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
            if(v.size() >= 3){
                bool ok = true;
            for(int i = 1;i<v.size()-1;i++){
                if((v[i] - v[i-1]) != (v[i+1] - v[i]))
                ok = false;
            }
            if(ok) ans++;
            }
        }
        return ans;
    }
};