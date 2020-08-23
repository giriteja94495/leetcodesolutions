// https://leetcode.com/problems/range-sum-query-2d-immutable/

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if( matrix.size()== 0|| matrix[0].size() == 0) return;   
        dp.resize(matrix.size()+1,vector<int>(matrix[0].size()+1,0));
        for(int i=1;i<=matrix.size(); i++){
            for(int j=1; j<=matrix[0].size() ;j++){
                dp[i][j]=matrix[i-1][j-1]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {  
     return dp[row2+1][col2+1]-dp[row1][col2+1]-dp[row2+1][col1]+dp[row1][col1];
    }
    private: vector<vector<int>> dp,temp;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
