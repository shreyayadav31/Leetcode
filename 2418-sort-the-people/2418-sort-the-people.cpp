class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> h;
        vector<string>ans;
        int n=heights.size();
        for(int i =0;i<n;i++){
            h.push_back(heights[i]);
        }
        sort(h.rbegin(),h.rend());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(h[i]==heights[j]){
                    ans.push_back(names[j]);
                    break;
                }
            }
        }
        return ans;
    }
};