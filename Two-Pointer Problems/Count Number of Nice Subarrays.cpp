
// https://leetcode.com/problems/count-number-of-nice-subarrays

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0;
        int i=0,j=0,odd=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&1!=0){
                odd++; 
                if(odd>=k){
                    count=1;
                    while(!(nums[j++]&1)) count++;
                    ans+=count; 
                }
            }
         else {
             if(odd>=k) ans+=count;
         }
        }
        return ans;
    }
};



// solution inspired from 
//https://leetcode.com/problems/count-number-of-nice-subarrays/discuss/508217/C%2B%2B%3A-Visual-explanation.-O(1)-space.-Two-pointers
