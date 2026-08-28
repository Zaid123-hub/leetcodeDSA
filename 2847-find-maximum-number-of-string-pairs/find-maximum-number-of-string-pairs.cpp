class Solution {
public:
        string sorted(string s){
            sort(s.begin(),s.end());
             return s;
        }
  
int maximumNumberOfStringPairs(vector<string>& s) {
        int n = s.size();
        int count = 0;
        for(int i=0;i<n-1;i++){
            sort(s[i].begin(),s[i].end());
            for(int j=i+1;j<n;j++){
               string ns =  sorted(s[j]);
               if(s[i]==ns) count++;
            }
        }
       return count;
    }
};