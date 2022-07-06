class Solution {
public:
    int fib(int n) {
        // recursion model - 0(2^n)- time complexity
        if(n==0 || n==1) return n;
        
        // return fib(n-1)+fib(n-2);
        
        
        // dp model 
        
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};