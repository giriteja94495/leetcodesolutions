class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1|| nums.size()==2){
            return nums[0];
        }
     
        for(int i=0;i<nums.size()-2;i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};
//one more naive approach ..but its okay if you don't do it in given time...coz you are learning 
//practice makes coder perfect..we can get to a place with min time complexity for that you gotta accept yourself and you should start working on optimizing the code
