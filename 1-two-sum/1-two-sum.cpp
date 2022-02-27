class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp ;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int lol= target-nums[i];
            if(mp.find(lol)!=mp.end()) {
                result.push_back(mp[lol]);
                result.push_back(i);
            }
            else mp[nums[i]]=i;
        }
        return result;
    }
};