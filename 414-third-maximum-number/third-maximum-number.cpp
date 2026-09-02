class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        long long flargest = LLONG_MIN;
        long long slargest = LLONG_MIN;
        long long tlargest = LLONG_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==flargest || nums[i]==slargest || nums[i]==tlargest){
                continue;
            }
            count++;
            if(nums[i]>flargest){
                
                tlargest = slargest;
                slargest = flargest;
                flargest = nums[i];
            }
           
            else if(nums[i]<flargest && nums[i]>slargest){
                tlargest = slargest;
                slargest = nums[i];
                

            }
            else if(nums[i]<slargest && nums[i]>tlargest){
                tlargest = nums[i];
                
            }
           
        }
        if(count<3) return flargest;
        else return tlargest;
        
        
    }
};