class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
       for(auto a:nums){
           res^=a;
       } 
        return res;
    }
};