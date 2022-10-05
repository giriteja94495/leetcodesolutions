class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // not my clever solution
        vector<vector<int>> l(r,vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c) return mat;
        else{
            for(int i=0;i< r*c ;i++){
                l[i/c][i%c] = mat[i/n][i%n];
            }
            
        }
        return l;
    }
};