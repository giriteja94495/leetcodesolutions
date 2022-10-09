class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;
        int ans = -1 ;
        while(low<=high){
            int mid = (high-low)/2 +low ;
            if(nums[mid]<target){
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                ans = mid;
                break;
            }
        }
        cout<<ans;
        int start=ans,end=ans;
        if(ans==-1 ) return {-1,-1};
        else {
              for(int i=ans+1,j=ans-1; i<nums.size() || j>=0;){
                  if(i<nums.size() && nums[ans]==nums[i]){
                      end = i;
                  }
                  
                  if(j>=0 && nums[ans]==nums[j]){
                      start = j;
                  }
                  i++;
                  j--;
              }
        }
        return {start,end};
    }
};