class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
          vector<set<int>> r(9),c(9),block(9);
          
          int m= board.size();
          int n = board[0].size();
          for(int i=0;i< m; i++){
              for(int j =0;j<n;j++){
                  if(board[i][j]=='.') continue;
                  int val = board[i][j]-'0';
                  if(r[i].count(val) || c[j].count(val) || block[(i/3)*3 + j/3].count(val)) return false;
                  
                  r[i].insert(val);
                  c[j].insert(val);
                  block[(i/3)*3 + j/3].insert(val);
              }
          }
        return true;
        
        
    }
};