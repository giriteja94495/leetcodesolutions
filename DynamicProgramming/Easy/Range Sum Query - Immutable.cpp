class NumArray {
public:
    
    NumArray(vector<int>& nums) {
int n=nums.size();
    sum.reserve(n+1);
    sum.push_back(0);
        for(int i=0;i<n;i++){
            sum.push_back(sum[i]+nums[i]);
        }
    }
   
    int sumRange(int i, int j) {
       return sum[j+1]-sum[i];
    }
    private:
    vector<int> sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
