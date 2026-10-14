class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int balance=0;
        int moves=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') {
                balance++;
                }
                else{
                    if(balance>0){
                        balance--;
                    }
                    else moves++;
                }
        }
        int score=balance+moves;
        return score;
    }
};