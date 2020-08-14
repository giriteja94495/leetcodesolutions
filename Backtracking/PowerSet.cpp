//   https://leetcode.com/problems/subsets

class Solution {
public:
     vector<vector<int>> giri;
     vector<int> sub;
    vector<vector<int>> subsets(vector<int>& nums) {
       
        
        backtrack(nums,0);
        
        return giri;
    }
    private:
       void backtrack(vector<int> &nums,int start){
           giri.push_back(sub);
           
           for(int i=start; i<nums.size(); i++){
           sub.push_back(nums[i]);
           backtrack(nums,i+1);
           sub.pop_back();
           }
       }
};





