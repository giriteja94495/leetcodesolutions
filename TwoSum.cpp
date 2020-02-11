class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> giri={0,0};
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(target==nums[i]+nums[j]){
                giri[0]=i;
                giri[1]=j;
               break;
            }
        }
    }
        return giri;
    }
    };
