class Solution {
public:
int maximumNumberOfStringPairs(vector<string>& s) {
        int n = s.size();
        int count = 0;
        for(int i=0;i<n-1;i++){
            string rev = s[i];
           reverse(rev.begin(),rev.end());
           for(int j=i+1;j<n;j++){
            if(rev==s[j]) count++;
           }
            }
            return count;
        }
       
};