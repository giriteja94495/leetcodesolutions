class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
       // if(numRows==1) return ans.push_back({1});
        ans.push_back({1});
        int k=0;
        numRows--;
        while(numRows--){
            vector<int> temp;
             temp.push_back(1);
             for(int i=1;i<ans[k].size();i++){
                 temp.push_back(ans[k][i] + ans[k][i-1]);
             }
            temp.push_back(1);
            ans.push_back(temp);
            k++;
        }
        return ans;
    }
};