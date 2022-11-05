class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows,vector<int>()); 
        ans[0] ={1};
        // if the numRows is 1 then return the answer
        if(numRows==1) return {{1}};
        // looping value index 
        int val =1;
        // go until your index is equal to numRows
        while(val != numRows){
            vector<int> temp ;
            // as we know that first and last elemtn in every vec is 1 
            temp.push_back(1);
            // main logic of adding up the previous rows i-1 and i-2 elements .
            for(int i=1;i<ans[val-1].size();i++){
                temp.push_back(ans[val-1][i-1] + ans[val-1][i]);
            }
            // as we know that first and last elemtn in every vec is 1 
            temp.push_back(1);
            
            // assign the vector to the answer array
            ans[val++]= temp;
        
        }
        
        // return the answer
        return ans;
    }
};