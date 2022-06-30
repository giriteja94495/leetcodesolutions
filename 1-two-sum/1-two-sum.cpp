class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // basic intution 
        // Time Complexity - O(n^2)
        // Space comeplexity - constant space O(1)
//         int a =0;
//         int b=0;
        
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     a=i;
//                     b=j;
//                     break;
//                 }
//             }
//         }
//         return {a,b};
        
        // Binary search approach 
        
        
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        
        int i=0;
        int j=nums.size()-1;
        int a=0,b=0;
        
        while(i<j){
            if(v[i].first + v[j].first == target){
                a=v[i].second;
                b=v[j].second;
                break;
            }
            else if(v[i].first + v[j].first < target) i++;
            else j--;
        }
        return {a,b};
        
        
        
        
        
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
        
//         vector<pair<int,int>> v;
//         for(int i=0;i<nums.size();i++){
//             v.push_back({nums[i],i});
//         }
//         sort(v.begin(),v.end());
        
        
//         int i=0;
//         int j=v.size()-1;
//         int idx1;
//         int idx2;
        
//         while(i<j){
//             if(v[i].first+ v[j].first == target){
//                 idx1=v[i].second;
//                 idx2=v[j].second;
//                 return {idx1,idx2};
//             } 
//             else if(v[i].first+ v[j].first < target){
//                 i=i+1;
//             }
//             else j--;
//         }
//         return {idx1,idx2};
        
        
    }
};