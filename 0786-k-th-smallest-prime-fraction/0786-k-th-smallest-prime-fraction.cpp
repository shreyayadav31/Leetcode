class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float> ans;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<=arr.size()-1;j++){
                ans.push_back((float)arr[i]/(float)arr[j]);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(ans[k-1] == ((float)arr[i]/ (float)arr[j]) ){
                    return {arr[i], arr[j]};
                }
            }
        }
        return {0,1};
        
    }
};