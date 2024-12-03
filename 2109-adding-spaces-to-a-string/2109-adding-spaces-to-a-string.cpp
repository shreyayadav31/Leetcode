class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m= s.size();
        int n= spaces.size();
        string str((m+n), ' ');
        int j=0;
        for(int i=0;i<m;i++){
            if(j < n && i==spaces[j]){
                j++;
            }
            str[i+j]=s[i];
        }
        return str;
    }
};