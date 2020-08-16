// https://practice.geeksforgeeks.org/problems/stickler-theif/0

// This solution is O(1) space complexity and O(N) Time.

int maxLoot(int n , int arr[])
{
   int inc=arr[0];
   int exc=0;
   for(int i=1;i<n;i++){
       int temp=max(inc,exc);
       inc=exc+arr[i];
       exc=temp;
   }
   return max(inc,exc);
}

// If you don't care about space ,then it would be better to keep track of max by using a vector

int maxLoot(int n , int arr[])
{
  if(n==0) return 0;
  
  if(n==1) return arr[0];
  if(n==2) return max(arr[0],arr[1]);
  
  vector<int> dp(n);
  dp[0]=arr[0];
  dp[1]=max(arr[0],arr[1]);
  
  for(int i=2;i<n;i++){
    dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
  }
   
   return dp[n-1];
}
