//  https://leetcode.com/problems/regular-expression-matching/


// One of the best dynamic programming problems....I didn't do this ,i learnt the approach from tushar youtube dynamic programming .


// This is his solution ,i wrote in cpp

class Solution {
public:
    bool isMatch(string s, string p) {
    
    // extra space to cache the previous results
       vector<vector<bool>> dp(s.size()+1,vector<bool> (p.size()+1,false));
        // empty text and pattern always match
        dp[0][0]=true;
        
        
        // this is for case like the pattern is like a* || a*b* we will just consider it's j-2 coz,the pattern can even match empty 
        // strings (* means 0 or  more characters)
        for(int i=1;i<=p.size();i++){
            if(p[i-1]=='*'){
                dp[0][i]=dp[0][i-2];
            }
        }
        
        // the official drama starts here
        for(int i=1;i<=s.size();i++){
            for(int j=1;j<=p.size();j++){
            
            // if the characters match or we have pattern of '.',we just remove the current text and pattern character and check its diagnol one
                if(s[i-1]==p[j-1]  || p[j-1]=='.'){
                    dp[i][j]=dp[i-1][j-1];
                }
                
                // if we have * we just take the value at 2 cols left ,but wait it's not done yet 
                else if(p[j-1]=='*'){
                    dp[i][j]=dp[i][j-2];
                    
                    // what if that is false ,we can still match if you have . and we can match it with its previous pattern 
                    if(p[j-2]=='.'|| p[j-2]==s[i-1]){
                        dp[i][j]=dp[i][j] || dp[i-1][j];
                    }
                }else{
                // even if you dont write this ,it's perfectly fine coz, we intilalised with false ..hahah
                    dp[i][j]=false;
                }
            }
            
        }
        return dp[s.size()][p.size()];
        
    }
};
