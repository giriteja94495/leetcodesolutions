class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // int res=0;
       // for(auto a:nums){
       //     res^=a;
       // } 
       //  return res;
        
        unordered_map<int,int> mp ;
        for(auto a:nums) mp[a]++;
        int ans=0;
        for(auto itr=mp.begin();itr!=mp.end();itr++) {
        if(itr->second==1) return itr->first;
        }
        return 0;
        
       
    }
};