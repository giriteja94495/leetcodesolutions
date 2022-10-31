class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int k=0;
        for(int i=0;i<rows;i++){
            int p =i;
            int q =0;
            int value = matrix[p][q];
            while(p<rows && q<cols){
                if(matrix[p][q] != value) return false;
                else{
                    p++;
                    q++;
                }
            }
            
        }
        for(int i=0;i<cols;i++){
            int p =0;
            int q =i;
            int value = matrix[p][q];
              while(p<rows && q<cols){
                if(matrix[p][q] != value) return false;
                else{
                    p++;
                    q++;
                }
            }
        }
        return true;
    }
};