class Solution {
public:
    bool isPalindrome(string s) {
        string ans;

        for(char c: s){
            c = tolower(c);
            if(isalnum((unsigned char)c)){
                ans.push_back(c);
            }
        }
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != ans[ans.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};