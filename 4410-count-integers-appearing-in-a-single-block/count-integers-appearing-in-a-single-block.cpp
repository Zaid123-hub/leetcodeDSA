class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        int ans = 0;
        vector<int>block(101,0);
        block[nums[0]]++;
        for(int i = 1;i<n;i++){
            if(nums[i] != nums[i-1]){
                block[nums[i]]++;
            }
        }

        for(int i = 1;i<=100;i++){
            if(block[i] == 1){
                ans ++;
            }
        }

        return ans;
    }
};