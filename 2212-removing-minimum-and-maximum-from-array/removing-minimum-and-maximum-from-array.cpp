class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxVal = INT_MIN;
        int minVal = INT_MAX;
        int maxi = 0;
        int mini = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxVal){
                maxVal = nums[i];
                maxi = i;
            }
             if(nums[i]<minVal){
                minVal = nums[i];
                mini = i;
             }
        }
        int a = max(maxi,mini)+1;
        int b = n-min(maxi,mini);
        int c = (min(maxi,mini)+1) + (n-max(maxi,mini));
        return min(a,min(b,c));
       
    }
};