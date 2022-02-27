class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //brute force solution , will be TLE
        // for(int i=0;i<nums.size();i++){
        //     int x=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //      if(nums[j]==x) return true;   
        //     }
        // }
        // return false;
        
        
        // map solution 
        
        unordered_map<int, int > mp ;
       
        for(auto a:nums) mp[a]++;
        for(auto itr=mp.begin();itr!=mp.end(); itr++) if(itr->second>1) return true;
        return false;
        
        
        // sorting solution 
        
        
    }
    
};