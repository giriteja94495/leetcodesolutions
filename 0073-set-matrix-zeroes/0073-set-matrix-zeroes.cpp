class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // create boolean variables to keep track wheter first row or col contains zero value 
        bool isFirstRowZero = false;
        bool isFirstColZero = false;
        
        // declare matrix row and col sizes
        int rows = matrix.size();
        int cols = matrix[0].size();
    
        // loop through all first col and check if any element is zero , then we need to make it's entire col as 0 
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==0) {
                isFirstRowZero = true;
                break;
            }    
        }
        
        // loop through all first row and check if any element is zero , then we need to make it's entire row as 0 
        for(int i=0;i<cols;i++){
            if(matrix[0][i]==0){
                isFirstColZero = true;
                break;
            }
        }
        
        // now handle other elements , not the first row and col , as soon as you see the element as zero , you make the top most and left most value of matrix as 0;
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        
        // process the changes done by using above for loop 
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][0] ==0 || matrix[0][j]==0){
                    matrix[i][j] =0;
                }
            }
        } 
        
        // it's my mistake to name isFirstColZero instead of isFirstRowZero ,but anyway you understood the idea , so get on with it
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
        
        // not a great sol , but easy one to understand i believe
        
    }
    
};