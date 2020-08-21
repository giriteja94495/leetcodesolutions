//  https://leetcode.com/problems/permutations/

// regular backtracking approach
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



// using stl function 

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> giri;
        sort(nums.begin(),nums.end());
        
        do{
            giri.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        
        return giri;
    }
};
