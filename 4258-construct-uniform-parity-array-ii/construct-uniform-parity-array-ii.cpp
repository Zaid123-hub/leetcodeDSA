class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        bool all_odd = true;
        bool all_even = true;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0) all_odd = false;
            if(nums1[i] % 2 != 0) all_even = false;
        }
        if (all_odd || all_even) return true;

        sort(nums1.begin(),nums1.end());
        bool odd = false;
        // trying making all o
        if(nums1[0] % 2 != 0) return true;
        else return false;
        // trying making all e
    }
};