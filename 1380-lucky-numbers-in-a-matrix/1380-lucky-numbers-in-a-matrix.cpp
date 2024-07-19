class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        vector<int> minInRow(matrix.size(), INT_MAX);
        vector<int> maxInCol(matrix[0].size(), INT_MIN);

        for(int i =0;i<matrix.size();i++){
            for (int j=0;j<matrix[i].size();j++){
                if (matrix[i][j] < minInRow[i]) {
                    minInRow[i] = matrix[i][j];
                }
            }
        }
        for (int j = 0; j < matrix[0].size(); j++) {
            for (int i = 0; i < matrix.size(); i++) {
                if (matrix[i][j] > maxInCol[j]) {
                    maxInCol[j] = matrix[i][j];
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == minInRow[i] && matrix[i][j] == maxInCol[j]) {   //compare min and max to each element
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};