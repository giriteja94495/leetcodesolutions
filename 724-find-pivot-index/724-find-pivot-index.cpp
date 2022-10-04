class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        // create 2 arrays and calculate the sum on each parts from left and right 
        vector<int> leftSum(n,0);
        vector<int> rightSum(n,0);
        
        for(int i=1;i<n;i++){
            leftSum[i] = (nums[i-1]+leftSum[i-1]);
        }
        for(int j=n-2; j>=0;j--){
            rightSum[j] =(nums[j+1]+rightSum[j+1]);
            cout<<rightSum[j];
        }
        // loop through the both arrays and find out at which index leftSum == rightSum
        for(int i=0;i<n;i++){
            if(leftSum[i]==rightSum[i]) return i;
        }
        // if we didn't find any, then return -1
        return -1;
    }
};