class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto a:nums) mp[a]++;
        int size=nums.size()/2;
        for(auto itr=mp.begin();itr!=mp.end();itr++) {
        if(itr->second > size) return itr->first;
        }
        return 0;
    }
};