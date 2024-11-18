class Solution {
public:
    string removeDuplicates(string s) {
        vector<pair<char,int>> st;
        for(auto it:s){   //iterate through each character 
            if(st.size()==0 || st.back().first!=it)    //
            {
                st.push_back({it,1});
            }
            else{
                st.back().second++;      //element is repeated
            }
            if(st.back().second>=2){
                st.pop_back();
            }
        }
        string res;
        for(auto x:st){
            res.append(x.second,x.first);  //insert st.first (char) st.second times (int)
        }
        return res;
        
        
    }
};