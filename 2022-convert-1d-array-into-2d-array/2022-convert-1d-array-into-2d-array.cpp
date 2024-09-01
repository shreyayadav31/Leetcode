class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!= original.size()){
            return {};
        }
        vector<vector<int>> res( m, vector<int> (n));  //m vectors of size n
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=original[idx];
                idx++;

            }
        }
        /* //2nd approach  O(m*n)
        
        for(int i=0;i<original.size();i++){
            int row= i/n;
            int col= i%n;
            res[row][col]= original[i];
        }
        */
        return res;
    }
};