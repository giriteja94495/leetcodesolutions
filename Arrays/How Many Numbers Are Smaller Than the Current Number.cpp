class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> out;
    
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<nums.size() ;j++){
                if(i==j){
                    continue;
                }
               if(nums[i]>nums[j]){
                   sum++;
               }
            }
            out.push_back(sum);
        }
        return out;
    }
};
