// https://leetcode.com/problems/longest-common-subsequence/


// Recursive approach ..this will result in TLE

class Solution {
public:
    int rec(string s1, string s2, int i, int j){
        if(i<0 || j<0) return 0;
       return s1[i]==s2[j]?1+rec(s1,s2,i-1,j-1):max(rec(s1,s2,i,j-1),rec(s1,s2,i-1,j));
    }
    int longestCommonSubsequence(string text1, string text2) {
        return rec(text1,text2,text1.size()-1,text2.size()-1);
        
    }
};

// dp approach 

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[text1.size()+1][text2.size()+1];
        for(int i=0;i<=text1.size();i++){
            for(int j=0;j<=text2.size();j++){
                if(i==0 || j==0) dp[i][j]=0;
                else if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[text1.size()][text2.size()];
    }
};
