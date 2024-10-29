class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();    
        int m = matrix[0].size();
        
        vector<vector<int>> dp(n, vector<int>(m, 0)); //dp table
        
        int count = 0;
        for (int i = 0; i < n; i++) {      //for 1st column
            dp[i][0] = matrix[i][0];
            count += dp[i][0];  
        }

        for (int j = 1; j < m; j++) {      //for 1st row
            dp[0][j] = matrix[0][j];
            count += dp[0][j];  
        }
        
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][j] == 1) {
                    dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
                }
                count += dp[i][j];
            }
        }
        
        return count;
        
    }
};