class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
//         int i=0,j=0;
//         int a, b;
//         int len=INT_MIN;
            
//       while(i<nums.size()){
//          a= nums[i];
//          j=i+1;
//           int count=0;
//          while((j+1)<nums.size() && nums[j]>a){
//            count++;
//              a=nums[j+1];
//              j++ ;
//             } 
//           i=j;
//           len=max(len,count);
          
//       }
//         return len;
//     }
        if(nums.size()<=1) return nums.size();
        
        sort(nums.begin(),nums.end());
        int ans=1;
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            
            else if(nums[i]-nums[i-1]==1){
                c++;
            }
            else{
                c=1;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};
    
    
    