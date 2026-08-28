class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        string prefix = s[0];
        for(int i=1;i<n;i++){
              int x = prefix.length();
            int kl = s[i].length();
            int minl  = min(kl,x);
            for(int j=0;j<minl;j++){
                    if(prefix[j]!=s[i][j]){
                            prefix = prefix.substr(0,j);
                            break;
                    } 
            }
              if(kl<x){
                        prefix = prefix.substr(0,minl);
                    }
        
        }
        return prefix;
    }
};