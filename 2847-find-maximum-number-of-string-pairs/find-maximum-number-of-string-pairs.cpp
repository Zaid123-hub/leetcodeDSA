class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        int count = 0;
        unordered_set<string> s;
        for(int i=0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
             if(s.find(rev)!=s.end()){ //agr everse exist krta h set me 
                count++;
             }
           else s.insert(arr[i]);
        }
        return count;
    }
};