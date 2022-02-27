class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //kaden's algorithm
        int maxS=INT_MIN;
        int local=0;
        for(int i=0;i<nums.size();i++){
         local=max(nums[i], local+nums[i]);
            maxS= max(local,maxS);
        }
        return maxS;
        
        
        // dp solution 
        
        
        vector<int> dp(nums.size());
        dp[0]=nums[0];
        int ans=INT_MIN;
        for(int i=1;i<nums.size();i++){
            dp[i]=max(dp[i],dp[i-1]+nums[i]);
            ans=max(ans,dp[i]);
        }
        return ans;
        
        
    }
    
};