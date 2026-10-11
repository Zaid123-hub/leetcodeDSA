class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int spsumsq=0;
        for(int i=0;i<n;i++){
            if(n%(i+1)==0) spsumsq+=(nums[i]*nums[i]);
        }
        return spsumsq;
    }
};