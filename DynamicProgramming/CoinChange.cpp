class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       int max=amount+1;
        vector<int> result(amount+1,max);
        result[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    result[i]=min(result[i],result[i-coins[j]]+1);
                }
            }
        }
        return result[amount]>amount?-1:result[amount];
    }
};
