// https://leetcode.com/problems/subarray-sum-equals-k/submissions/


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        // okay ! don't go on and try implmenting it with brute force O(N^2)
        //Let's look at another alternative for that 
        unordered_map<int,int> mp; // whihch stores the sum encountered so far with number of times
        int sum=0;
        
        //let us consider that we have one element with sum=0;
        mp[0]=1;
        // if you get a doubt that ! why is this guy using map 
        // let's go through a example
        /*
        
        [1,2,1,1,1,2,3,1]
        if you are asked to find the count of subarrays with sum =3
        then we need to find the subarray ,so as the brute force won't work here 
        let's calculate the prefix sums and to find the subarray sum
        S[I:J] = PRESUM OF S[0:J]-S[0:I-1]
        so this is the prime idea of this solution
        */
        
        for(int i=0; i<n; ++i){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
            mp[sum]++;
        }
        
        
        return count;
    }
};
