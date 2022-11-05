class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isFirstRowZero = false;
        bool isFirstColZero = false;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
    
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==0) {
                isFirstRowZero = true;
                break;
            }    
        }
        
        for(int i=0;i<cols;i++){
            if(matrix[0][i]==0){
                isFirstColZero = true;
                break;
            }
        }
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][0] ==0 || matrix[0][j]==0){
                    matrix[i][j] =0;
                }
            }
        } 
        
        if(isFirstRowZero){
             for(int i=0;i<rows;i++){
                 matrix[i][0] = 0;
            }    
        }
         if(isFirstColZero){
             for(int i=0;i<cols;i++){
                 matrix[0][i] = 0;
            }    
        }
        
    }
    
};