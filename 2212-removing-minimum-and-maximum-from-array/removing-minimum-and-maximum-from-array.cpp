class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = 0, maxi = 0;
        for(int i=0;i<n;i++){
            if(nums[mini] > nums[i]) mini = i;
            if(nums[maxi] < nums[i]) maxi = i;
        }
        int left = min(mini, maxi);
        int right = max(mini, maxi);
        int bleft = right + 1;
        int bright = n - left;
        int both = left + 1 + n - right;
        return min({bleft, bright, both});
    }
};