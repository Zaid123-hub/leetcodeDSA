class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // USING HASHMAP
        int n = nums.size();
        vector<int> v;
        unordered_map<int,int> mp;
        int minmcount=(n/3)+1;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==minmcount) v.push_back(nums[i]);
        }
        return v;
    }
};