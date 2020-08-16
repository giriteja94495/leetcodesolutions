//  https://leetcode.com/problems/product-of-array-except-self/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans(n);
        
        if(n==1 || n==0{
         return ans;    
        }
        
        vector<int> left(n);
        vector<int> right(n);
        left[0]=1;
        right[n-1]=1;
        
        for(int i=1,j=n-2;i<=n && j>=0 ; i++,j--){
            left[i]=nums[i-1]*left[i-1];
            right[j]=nums[j+1]*right[j+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        
        
        return ans;
        
    }
};
