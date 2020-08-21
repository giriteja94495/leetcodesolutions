// https://leetcode.com/problems/permutations-ii/


class Solution {
public:
    vector<vector<int>> giri;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        vector<int> temp;
        sort(nums.begin(),nums.end());
        backtrack(nums,used,temp);
        return giri;
    }
    private:
    void backtrack(vector<int> &nums, vector<bool> used,vector<int> temp){
        if(temp.size()==nums.size()){
            giri.push_back(temp);
        }
        for(int i=0;i<nums.size();i++){
            if(  used[i] || i>0 && nums[i]==nums[i-1] && !used[i-1]) continue;
            used[i]=true;
            temp.push_back(nums[i]);
            backtrack(nums,used,temp);
               used[i]=false;
            temp.pop_back();
        }
        return ;
    }
    
};
