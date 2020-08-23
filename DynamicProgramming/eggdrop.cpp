// This is one of the bad ass problem which would improve your dynamic programming skills

#include <bits/stdc++.h>
using namespace std;
int solve(int n,int k){
    // if number of eggs are 1 and we have k floors ...we have to take care of every chucking drop from each floor
    if(n==1 ) return k;
    
    // if number of floors is 0 ,then we return 0(coz we don't need any drops ) ,if number of floors are 1 then gone ....we have to drop only one time 
    
    if(k==0 || k==1) return k;
    
    int ans; // this is gonna be my final answer
    
    int number=INT_MAX;
    // for every floor we drop and find the worst case
    for(int i=1;i<=k;i++){
        ans=max(solve(n-1,i-1),solve(n,k-i));
        // there are 2 cases in this , if eggs breaks it means we have to go down ,so basically we will have n-1 eggs and i-1 floors ,don't get confused with  i and k
        // i is number of floors at the current recursion
        // if egg doesn't break so we go upwards ,we have n eggs and (totalfloors- i(current floor)) number of floors
        number=min(number,ans);
        // update the ans in every recursion
    }
    return number+1; // one plus that chance 
    
}
int main() {
	 int t;
	 cin>>t;
	 while(t--){
	     int n,k;
       // n is number of eggs and k is number of floors 
	     cin>>n>>k;
	     cout<<solve(n,k)<<endl;
	     
	     
	 }
	return 0;
}
