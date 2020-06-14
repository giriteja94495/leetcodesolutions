class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int loc=nums[0];
        int glob=nums[0];
        for(int i=1;i<nums.size();i++){
            loc=max(nums[i],nums[i]+loc);
            glob=max(loc,glob);
        }
        return glob;
        
    }
};
