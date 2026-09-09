class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int n = nums.size();
        int sum = 0;
        int l=0;
        int r=k-1;
        double avg = 0;
        int count = 0;
        for(int i=l;i<=r;i++){
            sum+=nums[i];
        }
        avg = (double)sum/k;
         if(avg>=threshold) count++;
        while(r<n-1){
            sum = sum-nums[l];
            l++;
            r++;
            sum = sum+nums[r];
            avg = (double)sum/k;
            if(avg>=threshold) count++;
        }
        return count;
    }
};