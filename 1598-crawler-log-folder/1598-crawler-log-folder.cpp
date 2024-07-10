class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i][0]!='.'){
                ans++;
            }
            else if( ans>0 && logs[i][0]=='.' && logs[i].size()==3){
                ans--;
            }
        }
        return ans;   
    }
};