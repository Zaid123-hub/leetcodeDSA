class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int score = 0;
            for(int j=i;j<n+i-1;j++){
                if(s[(j)%n] == s[(j+1)%n]) score++;
            }
            if(score == k) ans++;
        }
        return ans;
    }
};