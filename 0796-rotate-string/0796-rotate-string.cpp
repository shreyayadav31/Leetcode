class Solution {
public:
    bool rotateString(string s, string goal) {
        string str = s;
        char ch;
        if(s.size()!= goal.size()){
            return false;
        }
        for(int i =0 ;i<str.size();i++){
            if(str == goal){
                return true;
            }
            ch = str[0];
            str.erase(0,1);
            str.push_back(ch);
        }
        return false;
    }
};