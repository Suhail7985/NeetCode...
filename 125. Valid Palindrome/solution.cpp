class Solution {
public:
    bool isPalindrome(string s) {
        string cln = "";
        int i;
        for(char c : s){
            if(isalnum(c)){
                cln += tolower(c);
            }
        }
        string rev = cln;
        reverse(rev.begin(),rev.end());
        return rev == cln;
    }
}