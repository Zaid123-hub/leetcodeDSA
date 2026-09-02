class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>n-1-k;i--){
            maxi = nums[i];
        }
        return maxi;
    }
};