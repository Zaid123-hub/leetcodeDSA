class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        for(auto x : st){
            if(st.find(x-1) == st.end()){
                int count = 1;
                int t = x;
                while(st.find(t+1) != st.end()){
                    t=t+1;
                    count=count+1;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};