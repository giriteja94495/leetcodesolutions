class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0;
        int i =0;
        count =1;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!= nums[i]){
                i++;
                nums[i]=nums[j];
                count++;
            }
            else{
                continue;
            }
        }
        return count;
    }
};