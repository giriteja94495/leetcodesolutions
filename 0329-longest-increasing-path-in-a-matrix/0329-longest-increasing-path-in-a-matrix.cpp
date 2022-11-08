class Solution {
public:
    vector<vector<int>> moves = {{-1,0},{1,0},{0,1},{0,-1}};
    
    vector<vector<int>> dp ;
    // lol just coz i didnt use &matrix in below line , i got memory limit exceeded ...waah c++ bc
    int solve(vector<vector<int>> &matrix, int i , int j){
        
        if(dp[i][j]) return dp[i][j];
        dp[i][j] = 1;

        for(int k=0;k<4;k++){
            int newX = i+moves[k][0];
            int newY = j+moves[k][1];
            
            if(newX<0 || newY<0 || newX>= matrix.size() || newY>=matrix[0].size() || matrix[newX][newY] <= matrix[i][j]) continue;
            
            dp[i][j] = max(dp[i][j], 1+ solve(matrix,newX,newY));
        }
        
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        dp.resize(m,vector<int> (n));
        
        
        int val = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                val = max(val , solve(matrix, i, j));
            }
        }
        return val;
    }

};