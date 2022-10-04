class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> leftSum(n,0);
        vector<int> rightSum(n,0);
        
        for(int i=1;i<n;i++){
            leftSum[i] = (nums[i-1]+leftSum[i-1]);
        }
        for(int j=n-2; j>=0;j--){
            rightSum[j] =(nums[j+1]+rightSum[j+1]);
            cout<<rightSum[j];
        }
        for(int i=0;i<n;i++){
            if(leftSum[i]==rightSum[i]) return i;
        }
        return -1;
    }
};