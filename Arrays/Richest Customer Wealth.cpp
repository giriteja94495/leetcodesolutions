class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int count=accounts[i].size();
            int local_sum=0,j=0;
            while(count--){
                local_sum+=accounts[i][j++];
            }
            ans=max(ans,local_sum);
        }
        return ans;
    }
};
