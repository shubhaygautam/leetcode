class Solution {
public:
    string makeGood(string s) {
        bool ch = 1;
        
        while(ch){
            ch = 0;
            string t = s;
            for(int i = 0; i<(int)s.length()-1; i++){
                if(s[i] == s[i+1]+32 or s[i]+32 == s[i+1]){
                    t = s.substr(0, i)+s.substr(i+2);
                    ch = 1;
                    break;
                }
            }
            s = t;
        }
        return s;
    }
};