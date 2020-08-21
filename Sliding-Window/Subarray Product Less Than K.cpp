// https://leetcode.com/problems/subarray-product-less-than-k/


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int count=0;
        int product=1;
        if(k<=1) return 0;
        // if you are wondering for the k=1 case ,it will have zero elements thats product is             less than 1
        while(j<n){
            product*=nums[j];
            while(product>=k){
                product/=nums[i];
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
    }
};
