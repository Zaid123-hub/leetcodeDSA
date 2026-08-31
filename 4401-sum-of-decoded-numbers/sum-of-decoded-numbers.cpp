class Solution {
public:
   long long power(long long x, long long y) {
    long long result = 1;

    while(y > 0) {
        if(y % 2 == 1)
            result = (result * x) % 1000000007;

        x = (x * x) % 1000000007;
        y /= 2;
    }

    return result;
}


    int sumDecoded(vector<long long>& nums) {
        int n = nums.size();
        long long sum = 0;
       
        for(int i=0;i<n;i++){
            long long width = nums[i]%10;
            long long d = nums[i]/10;
            long long count = 0;
              long long nd = d;
        while(d>0){
            count++;
            d = d/10;
        }
                long long p = power(10,(count-width));
            long long x = nd/p;
            long long y = nd%p;
         sum = sum+power(x,y);
        }
        
        return sum%1000000007;

    }
};