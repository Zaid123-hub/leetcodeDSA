class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n);
        pre[0] = nums[0];
        int count = 0;
        for(int i=1;i<n;i++){
            pre[i] = (pre[i-1]+nums[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum;
            if(i==0) sum = pre[j];
            if(i!=0){
                sum = pre[j]-pre[i-1];
            }
            if(sum==k) count++;
            }
        }
        return count;
    }
};