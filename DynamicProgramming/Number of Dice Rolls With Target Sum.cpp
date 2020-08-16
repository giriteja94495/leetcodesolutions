// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/

class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        
        long long dp[d+1][target+1];
          memset(dp,0,sizeof(dp));
        for(int i=1;i<=f && i<=target;i++){
            dp[1][i]=1;
        }
        
        for(int i=2;i<=d;i++){
            for(int j=1;j<=target;j++){
                for(int k=1;k<=f  && k<j; k++){
                    dp[i][j] += (dp[i-1][j-k]);
                    dp[i][j]%=1000000007;
                }
            }
        }

        return int(dp[d][target]);

    }
};
