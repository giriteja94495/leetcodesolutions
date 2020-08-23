// https://leetcode.com/problems/longest-palindromic-subsequence/



// Naive recursive approach with memoization
class Solution {
public:
    // extra space to store the calculations
    vector<vector<int>> dp;
    
    int longestPalindromeSubseq(string s) {
        // resizing takes good amount of time complexity but still... i had to go for it 
        dp.resize(s.size(),vector<int> (s.size()));
        return helper(s,0,s.size()-1);
    }
    private:
            int helper(string s, int l, int r){
                // this is a tricky base case,consider an example of "gg" after s[0]==s[1] then l and r becomes 1 and 0 ,so we have to return 0
                if(l>r) return 0;
                
                // this is for odd length palindrome 
                if(l==r) return 1;
                
                // if we found the calculation ...just return it
                if(dp[l][r]) return dp[l][r];
                
                // if the strings are equal ..then we found 2 similar chars in our required palindrome so ,it is 2+helper(increment left ,decrement right)
                // if they are not equal ,either increase left or decrease right and find the max subsequence
                return dp[l][r]=(s[l]==s[r]?2+helper(s,l+1,r-1):max(helper(s,l+1,r),helper(s,l,r-1)));
            }
};

// i cracked my head while understanding this ...it was worth it 
// DP Solution
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n));
        for(int i=n-1;i>=0; i--){
            dp[i][i]=1;
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    dp[i][j]=2+dp[i+1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
    }
    
};
