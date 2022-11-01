class Solution {
public:
    int findTheCol(int row , int col , vector<vector<int>> &grid){
        if(row==grid.size()) return col;
        int nexCol = col+ grid[row][col];
        if(nexCol<0 || nexCol> grid[0].size()-1 || grid[row][col] != grid[row][nexCol]) return -1;
        
        return findTheCol(row+1,nexCol,grid);
    }
    vector<int> findBall(vector<vector<int>>& grid) {
     vector<int> ans; 
     int m = grid.size();
     int n = grid[0].size();
     for(int i =0;i<n;i++){
         ans.push_back(findTheCol(0,i,grid));
     } 
     return ans;   
    }
};