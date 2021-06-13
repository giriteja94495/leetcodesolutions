class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        for(int j=0;j<nums.size();j++){
        for(int i=j;i<2*nums.size();i++){
            if(nums[j]<nums[i%nums.size()]){
                ans[j]=nums[i%nums.size()];
                break;
            }
        }
    }
        return ans;
    }
};
