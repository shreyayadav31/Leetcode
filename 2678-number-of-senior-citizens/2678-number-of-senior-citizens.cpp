class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            for(int j=0;j<details[i].size()-2;j++){
                if(isalpha(details[i][j])){
                    if( details[i][j+1]=='6' && details[i][j+2]>'0')
                        count++;
                    else if(details[i][j+1]>'6')
                        count++;
                    else 
                        continue;
                }
            }
        }
        return count;
    }
};