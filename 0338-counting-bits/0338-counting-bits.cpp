class Solution {
public:

    
    
    vector<int> countBits(int n) {
      vector<int> ans(n+1,0);
	  // the above if cases are just for your understanding, instead you can directly write like this .
	  for(int i=0;i<=n;i++){
	  if(i==0 || i==1) ans[i]= i;
	  if(i%2 ==0) ans[i]= ans[i/2];
	  if(i%2 ==1) ans[i] = 1+ans[i/2];
	  }
	  return ans;
    }
};

    
 
    
   