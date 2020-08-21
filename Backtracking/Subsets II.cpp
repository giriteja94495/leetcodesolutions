
// https://leetcode.com/problems/subsets-ii/submissions/

class Solution {
public:
    vector<vector<int>> giri;
   
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        backtrack(nums,temp,0);
        
        return giri;
    }
    private:
    void backtrack(vector<int> &nums, vector<int> temp, int start){
       
            giri.push_back(temp);
         
        for(int i=start;i<nums.size(); ++i){
            if(i>start && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            backtrack(nums,temp,i+1);
            temp.pop_back();
        }
        return ;
    }
};
