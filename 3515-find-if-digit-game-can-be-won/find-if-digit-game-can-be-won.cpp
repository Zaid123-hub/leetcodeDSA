class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int sumd = 0;
        int sums = 0;
        for(int i=0;i<n;i++){
            if(nums[i]>9) sumd+=nums[i];
            else sums+=nums[i];
        }
        if(sumd!=sums) return true;
        else return false;
    }
};