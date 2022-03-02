class Solution {
public:
    
    bool helper(string a, string b, int m , int n ){
        if(m==0) return true;
        if(n==0) return false;
        if(a[m-1]==b[n-1]) {
          return helper(a,b,m-1,n-1);
        }
       return helper(a,b,m,n-1);
    
    }
    
    
    bool isSubsequence(string s, string t) {
        
        int idx1=0,idx2=0;
        while(idx1<s.size() && idx2<t.size()){
            if(s[idx1]==t[idx2]) {
                idx1++;
                idx2++;
            }
            else{
                idx2++;
            }
        }
        return idx1==s.size();
        
        
        // return helper(s,t,s.size(),t.size());
    }
};