class Solution {
public:
    vector<string> createGrid(int m, int n) {
      vector<string> v(m, string(n, '#'));
      
      v[0][0] = '.';
      v[m-1][n-1] = '.';
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==n-1){
                v[i][j] = '.';
            }
        }
      }
        return v;
      }
};