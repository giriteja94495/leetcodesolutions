class Solution {
public:
    
    int getIndex(int val ,vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            if(val==nums[i]) return i;
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            int k=getIndex(nums1[i],nums2);
            for(int j=k;j<nums2.size();j++){
                if(nums1[i]<nums2[j]){
                    ans[i]=nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};
