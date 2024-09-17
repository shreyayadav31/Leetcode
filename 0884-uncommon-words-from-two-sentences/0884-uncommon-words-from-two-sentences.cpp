class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        unordered_map<string,int>mp;
        string str=s1+" "+s2;
        
        stringstream ss(str);
        string word;
        while(ss>>word){
            mp[word]++;
        }

        for(auto itr:mp ){
            if(itr.second==1){
                ans.push_back(itr.first);
            }
        }
        return ans;  
    }
};