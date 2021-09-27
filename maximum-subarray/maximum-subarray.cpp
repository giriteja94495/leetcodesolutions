class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // [-2,1,-3,4,-1,2,1,-5,4]
        // O(N^2) find all sums of all subarrays and return the max one 
        // local 
        // global
        int global=INT_MIN;
        int local =0;
        for(int a:nums){
            local=max(local+a,a);
            global=max(local,global);
            
        }
        return global;
    }
};