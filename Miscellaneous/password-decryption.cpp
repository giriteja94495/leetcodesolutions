/*Question :
Alice wants to secure his bank account details and wants to encrypt his password P. He wants to encrypt it in such a fashion:-
Suppose P = "zyxabc", he will randomly shuffle his password, then he will concatenate a random string S1 in starting of P and a random string S2 at end of the string P. Let S1 = "fgh" and S2 = "bvf" then encrypted string become H = "fghcxabyzbvf".
Bob has got a password and an encrypted string, He being a hacker wants to check if the encrypted string can be a valid one for the password he have.
The password and encrypted password only consists of lower case english alphabets.

Input:
First line of input contains an integer T, denoting the number of test cases. First line of each test case contains the string P, second line of the test case contains the string H.

Output:
Print "Yes" if it is a valid one else "No".

Your Task:
This is a functional problem . You don't need to take input just complete the function valid() which accepts two strings P and S as parameters and return 0 or 1.

Constraints:
1<= T  <=30
1<= |P| <=105
1<= |H| <=105

Example:
Input:
2
zyxabc
fghcxabyzbvf
htc
hxtcczht

Output:
Yes
No
*/

// Easy but inefficient solution

#include <bits/stdc++.h>
using namespace std;

bool valid(string P, string H);

int main()
{
    int t;
    cin>>t;
    while(t--){
        string P,H;
        cin>>P>>H;
        if(valid(P,H))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

// } Driver Code Ends


//User function Template for C++
unordered_map<char,int> mp1;

bool valid(string P, string S){
    if(P.size()>S.size()) return false;
  for( int i=0;i<P.size();i++){
      mp1[P[i]]++;
  }
  int size=S.size();
  int k=P.size();
  unordered_map<char,int> mp2;
  for(int i=0;i<k;i++){
      mp2[S[i]]++;
  }
  if(mp2==mp1) return true;
  for(int i=1;i<=size-k+1;i++){
      mp2[S[i-1]]--;
      if(mp2[S[i-1]]==0) mp2.erase(S[i-1]);
      mp2[S[i+k-1]]++;
      if(mp2==mp1) return true;
  }
  
  return false;  
}


// Optimal solution 





