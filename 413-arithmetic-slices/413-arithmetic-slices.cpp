class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            int diff1=nums[i]-nums[i-1];
            int j=i+1;
            while(j<nums.size()){
                if(diff1==(nums[j]-nums[j-1])) count++;
                   else{
                       break;
                   }
                j++;
            }
        }
        return count;
    }
};