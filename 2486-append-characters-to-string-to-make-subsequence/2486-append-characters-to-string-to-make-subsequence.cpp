class Solution {
public:
    int appendCharacters(string s, string t) {
        int m = s.size(), n = t.size();
        int i = 0, j = 0;
        
        while(i<m && j<n){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if((j == n)){
            return 0;
        }
        return n-j;
    }
};