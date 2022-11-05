class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows,vector<int>()); 
        ans[0] ={1};
        if(numRows==1) return {{1}};
        int val =1;
        while(val != numRows){
            vector<int> temp ;
            temp.push_back(1);
            for(int i=1;i<ans[val-1].size();i++){
                temp.push_back(ans[val-1][i-1] + ans[val-1][i]);
            }
            temp.push_back(1);
            ans[val++]= temp;
        
        }
        return ans;
    }
};