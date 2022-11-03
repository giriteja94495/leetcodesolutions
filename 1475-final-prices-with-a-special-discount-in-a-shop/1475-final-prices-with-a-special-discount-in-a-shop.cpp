class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        for(int i=0;i<n-1;i++){
            int val = prices[i];
            int lollie = -1;
            for(int j=i+1;j<n;j++){
                if(prices[j] <= prices[i]){
                    lollie = prices[j];
                    break;
                }
            }
            ans[i] = lollie == -1 ? val : val - lollie;
        }
        ans[n-1]= prices[n-1];
        return ans;
    }
};