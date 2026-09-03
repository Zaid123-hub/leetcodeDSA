class NumArray {
public:
    vector<int> pre;
    int sum;
    NumArray(vector<int>& nums) {
            pre.resize(nums.size());
        pre[0] = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            pre[i] = nums[i]+pre[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return pre[right];
        else return pre[right]-pre[left-1];
    }
};

