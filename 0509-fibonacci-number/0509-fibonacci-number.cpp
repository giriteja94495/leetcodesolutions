class Solution {
public:
    int fib(int n) {
     
        if(n==1 || n==0) return n;
         vector<int> ans(n+1,0);
        ans[1]= 1;
        for(int i=2;i<=n;i++){
            ans[i]  = ans[i-1] + ans[i-2];
        }
        return ans[n];
    }
};