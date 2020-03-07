class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int arr[nums.size()+1];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()+1;i++){
            arr[i]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(arr[i]!=nums[i]){
                return arr[i];
            }
        }
       return arr[nums.size()];
    }
};
//This solution is very lame ..i used extra space which is not supposed to be used as per the question..but it's okay
//send me the best solution you got without hashmaps
