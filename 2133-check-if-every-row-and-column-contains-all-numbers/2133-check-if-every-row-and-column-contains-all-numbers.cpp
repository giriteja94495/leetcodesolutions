class Solution {
public:
    bool lol(vector<int> m){
        sort(m.begin(),m.end());
        for(int i=0;i<m.size();i++){
            if(m[i] != i+1) return false;
        }
       return true;
    }
    bool checkValid(vector<vector<int>>& matrix) {
        int m = matrix.size();
        for(int i =0;i<m ;i++){
            if(lol(matrix[i])== false) return false;
        }
       for(int i=0;i<m;i++){
           vector<int> temp ;
           for(int j=0;j<m;j++){
               temp.push_back(matrix[j][i]);
            }
              if(lol(temp)== false) return false;
       }
        return true;
    }
        
};