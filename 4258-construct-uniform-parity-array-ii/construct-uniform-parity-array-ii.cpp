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
        int mino = INT_MAX;
        int mine = INT_MAX;
        for(int i=0;i<n;i++){
                if(nums1[i]%2==0) mine = min(mine,nums1[i]);
                else mino = min(mino,nums1[i]);
        }
       
        if(mino < mine) return true;
        else return false;
        // trying making all e
    }
};