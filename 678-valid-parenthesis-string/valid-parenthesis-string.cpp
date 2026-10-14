class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        stack<int> open;
        stack<int> star;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{ // closing bracket
                if(open.size()!=0){
                    open.pop();
                }
                else if(!star.empty()){
                        star.pop();
                }
                   else return false;
                
            }
        }
            while(!star.empty() && !open.empty()){
                if(open.top()<star.top()){
                    open.pop();
                    star.pop();
                }
                else return false;
            }

        
        return open.empty();
    }
};