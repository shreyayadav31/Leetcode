class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char x:s){
            if(isalnum(x)){
                t+=tolower(x);
            }
        }
        string res=t;
        reverse(res.begin(),res.end());
        if(res==t)
            return true;
        else 
            return false;
    }
};