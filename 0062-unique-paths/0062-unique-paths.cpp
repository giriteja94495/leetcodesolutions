class Solution {
public:
    // TLE SOLUTION
    // int solve(vector<vector<int>> &matrix,int i , int j , int a ,int b){
    //     if(i>a || j>b || i<0 || j<0) return 0;
    //     if(matrix[i][j] != -1) return matrix[i][j];
    //     if(i==a && j==b) return 1;
    //     return  solve(matrix,i+1,j,a,b)+ solve(matrix,i,j+1,a,b);
    // }
    // int uniquePaths(int m, int n) {
    //      vector<vector<int>> matrix(m+1,vector<int>(n+1));
    //     for(int i =0;i<=m;i++){
    //         for(int j=0;j<=n;j++){
    //             matrix[i][j]=-1;
    //         }
    //     }
    //      return  solve(matrix,1,1,m,n);
    // }
    
      int uniquePaths(int m, int n) {
        vector<vector<int>> matrix(m,vector<int>(n));
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0) matrix[0][j]=1;
                if(j==0) matrix[i][0]=1;
               if (i != 0 && j != 0) {
                    matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
                }
            }
        }
        return  matrix[m-1][n-1];
    }
};