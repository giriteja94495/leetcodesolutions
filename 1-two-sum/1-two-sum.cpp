class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //map based approach
        
        
        // unordered_map<int,int> mp ;
        // vector<int> result;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int lol= target-nums[i];
        //     if(mp.find(lol)!=mp.end()) {
        //         result.push_back(mp[lol]);
        //         result.push_back(i);
        //     }
        //     else mp[nums[i]]=i;
        // }
        // return result;

        // Binary Search
        
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        
        
        int i=0;
        int j=v.size()-1;
        int idx1;
        int idx2;
        
        while(i<j){
            if(v[i].first+ v[j].first == target){
                idx1=v[i].second;
                idx2=v[j].second;
                return {idx1,idx2};
            } 
            else if(v[i].first+ v[j].first < target){
                i=i+1;
            }
            else j--;
        }
        return {idx1,idx2};
        
        
    }
};