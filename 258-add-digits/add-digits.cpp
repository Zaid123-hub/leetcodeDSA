class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num>0){
         int digit = num%10;
            sum += digit;
            num = num/10;    
        }
        while(sum>=10){
            int newsum = 0;
            while(sum>0){
             int dig = sum%10;
            newsum += dig;
            sum = sum/10;
            }
            sum = newsum;
        }
        return sum;
    }
};