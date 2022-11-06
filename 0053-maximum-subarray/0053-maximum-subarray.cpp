class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int finalAns = INT_MIN;
        int ans=0;
        for(int i=0;i<size(nums);i++){
            ans = max(nums[i] , nums[i]+ ans);
            finalAns = max(ans,finalAns);
        }
        return finalAns;
        
        
    }
    
};