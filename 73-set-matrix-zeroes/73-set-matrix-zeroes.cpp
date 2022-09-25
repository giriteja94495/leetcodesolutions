class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool makeFirstColZero = true;
       
        
        for(int i=0;i<m;i++){
            if(matrix[i][0] == 0) makeFirstColZero=false;
            for(int j=1;j<n;j++){
                if(matrix[i][j] ==0 ){
                    matrix[0][j] =0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        
        for(int i=m-1;i>=0; i--){
            for(int j=n-1; j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
            if(makeFirstColZero== false) matrix[i][0]=0;
        }
    }
};