class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
             int count = 0;
             for(int j=0;j<n;j++){
                if(nums[i]==nums[j]) count++;
             }
             if(count>(n/3)) {
               bool found = false;
               for(int k=0;k<v.size();k++){
                if(v[k]==nums[i]){
                    found=true;
                    break;
                }
               }
               if(found==false){
                v.push_back(nums[i]);
               }
             }
        }
        return v;
    }
};