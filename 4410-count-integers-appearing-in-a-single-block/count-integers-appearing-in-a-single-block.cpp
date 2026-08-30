class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        unordered_set<int> notspecial;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            m[nums[i]]--;
            if(i==n-1 || nums[i]!=nums[i+1]){
             if(m[nums[i]]>0) {
                notspecial.insert(nums[i]);
             }
            
        }
        }
        return m.size()-notspecial.size();
    }
};