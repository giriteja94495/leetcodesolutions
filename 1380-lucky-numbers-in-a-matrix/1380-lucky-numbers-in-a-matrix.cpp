class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        // create a minRow and maxRow to store the minimum of a particular row and maximum of a particular column 
      vector<int> minRows(matrix.size());
      vector<int> maxCol(matrix[0].size()); 
        
        // find the min Elements of a row and store them 
        for(int i=0;i<matrix.size();i++){
            int minV= INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                minV= min(matrix[i][j],minV);
            }
            minRows[i] = minV;
        }
        
        // find the max Elements of a particular column 
          for(int i=0;i<matrix[0].size();i++){
            int maxV= INT_MIN;
            for(int j=0;j<matrix.size();j++){
                maxV= max(matrix[j][i],maxV);
            }
            maxCol[i] = maxV;
        }
        // this is where you form the answer of lucky numbers 
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                // we check for each element whether it is the min of the row and max of column by comparing it with the formed minRow and maxCol arrays
                if(matrix[i][j] == minRows[i] && matrix[i][j]== maxCol[j])                 {
                  ans.push_back(matrix[i][j]);  
                }
            }
        }
        
        // we return our answer
        return ans;
    }
};