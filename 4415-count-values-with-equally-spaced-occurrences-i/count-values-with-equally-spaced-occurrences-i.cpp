class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto x:mp){
            vector<int> v = x.second;
            if(v.size()==3){
                if(v[1]-v[0]==v[2]-v[1]) count++;
            }
        }
        return count;
    }
};