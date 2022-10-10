class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
      vector<int> minRows(matrix.size());
      vector<int> maxCol(matrix[0].size());  
        for(int i=0;i<matrix.size();i++){
            int minV= INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                minV= min(matrix[i][j],minV);
            }
            minRows[i] = minV;
        }
          for(int i=0;i<matrix[0].size();i++){
            int maxV= INT_MIN;
            for(int j=0;j<matrix.size();j++){
                maxV= max(matrix[j][i],maxV);
            }
            maxCol[i] = maxV;
        }
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == minRows[i] && matrix[i][j]== maxCol[j])                 {
                  ans.push_back(matrix[i][j]);  
                }
            }
        }
        return ans;
    }
};