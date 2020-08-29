// https://leetcode.com/problems/partition-to-k-equal-sum-subsets/

class Solution {
public:
    bool backtrack(vector<int>&nums,int k,int curr_sum,vector<bool> visited,int target_sum,int next){
        if(k==0){
          return true;
        }
        if(curr_sum==target_sum){
            return backtrack(nums,k-1,0,visited,target_sum,0);
        }
        for(int i=next;i<nums.size();i++){
            if( !visited[i] && curr_sum+nums[i]<=target_sum ){
                visited[i]=true;
                if(backtrack(nums,k,curr_sum+nums[i],visited,target_sum,i+1)){
                    return true;
                }
         }
            visited[i]=false;
        }
            return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
      int max_element=INT_MIN;
        int sum=accumulate(nums.begin(),nums.end(),0);
      for(int a:nums){
          max_element=max(max_element,a);
      }
      // i should have used the single loop for finding max_element and sum ....viewer can take care of that..
        if((sum/k < (max_element)) || sum%k!=0) return false;
        vector<bool> visited(nums.size(),false);
        return backtrack(nums,k,0,visited,sum/k,0);
    
    }
};
