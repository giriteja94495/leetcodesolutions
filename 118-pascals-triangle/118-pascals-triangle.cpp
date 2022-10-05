class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        int k=0;
        numRows = numRows-1;
        while(numRows){
            vector<int> temp ;
            temp.push_back(1);
            for(int i =1;i<ans[k].size();i++){
                temp.push_back(ans[k][i] +ans[k][i-1]);
            }
            temp.push_back(1);
            k++;
            ans.push_back(temp);
            numRows = numRows-1;
        }
        return ans;
    }
};