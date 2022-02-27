class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS=INT_MIN;
        int local=0;
        for(int i=0;i<nums.size();i++){
         local=max(nums[i], local+nums[i]);
            maxS= max(local,maxS);
        }
        return maxS;
    }
    
};