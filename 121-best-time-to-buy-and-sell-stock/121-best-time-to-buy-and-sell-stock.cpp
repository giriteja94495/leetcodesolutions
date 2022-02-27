class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int small=INT_MAX;
        int prof=0;
        for(int i=0;i<prices.size();i++){
            small=min(prices[i],small);
            prof=max(prof,prices[i]-small);
        }
        return prof;
    }
};