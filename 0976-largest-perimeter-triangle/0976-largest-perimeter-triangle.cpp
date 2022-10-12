class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // i thought this is easy sol , but later realised that it can have size greater than 3 
        if(nums.size()==3){
        sort(nums.begin(),nums.end());
        if(nums[2]-nums[0] >= nums[1] || nums[0]+nums[1]<nums[2]) return 0;
        return nums[0]+nums[1]+nums[2];
        }
        else{
            sort(nums.begin(),nums.end(),greater<int>());
            for(int i=0;i<nums.size()-2;i++){
                if(nums[i] < nums[i+1]+nums[i+2]) return nums[i+1]+nums[i+2]+nums[i];
            }
        }
       return 0;
    }
};