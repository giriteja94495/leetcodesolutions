// https://leetcode.com/problems/maximal-rectangle/


// you can see my lazy code here ...reference of this solution is tushar dynamic programming videos
// while i was solving this ,i couldn't figure out that matrix is a char matrix ,so i had to put so many cout statements to debug
class Solution {
public:
    int helper(vector<int> nums){
        stack<int> st;
        nums.push_back(0);
        int maxarea=0;
        for(int i=0;i<nums.size();i++){
            
            while(!st.empty() && nums[st.top()] > nums[i]){
                int top=nums[st.top()];
                st.pop();
                int rn=st.empty()?-1:st.top();
                maxarea=max(maxarea,(top*(i-rn-1)));
            }
            
            st.push(i);
        }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        if(rows==0) return 0;
        int cols=matrix[0].size();
        vector<int> dp(cols,0);
        int maxarea=INT_MIN;
        for(int i=0;i<cols;i++){
        if(matrix[0][i]=='1') {
            dp[i]=1;
          }
        
        }
        // for(auto a:dp){
        //     cout<<a<<" ";
        // }
        
        // cout<<helper({3,1,3,2,2});
        maxarea=max(maxarea,helper(dp));
        // cout<<maxarea<<endl;
        
        
        for(int i=1;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]=='0'){
                    dp[j]=0;
                }
                else{
                    dp[j]++;
                }
            }
            maxarea=max(maxarea,helper(dp));
              // cout<<maxarea<<endl;
        }
        return maxarea;
    }
};
