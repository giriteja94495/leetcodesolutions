class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp ;
        vector<int> ans;
        for(auto a: nums2){
            mp[a]++;
        }
        for(int i:nums1){
            if(mp[i]>0) {
                ans.push_back(i);
               mp[i]--;
            } 
            
        }
        return ans;
    }
};