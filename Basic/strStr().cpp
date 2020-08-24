// https://leetcode.com/problems/implement-strstr/


// Naive Intuitve Solution

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        int n=haystack.size();
        int m=needle.size();
        for(int i=0; i<=n-m; i++){
            int j=i;
            bool flag=false;
            for(int j=0; j< m; j++){
                if(haystack[i+j]==needle[j]) continue;
                else {
                    flag=true;
                    break;
                }
            }
            if(!flag) return i;
        }
        return -1;  
    }
};

// efficient solution   KMP ALGORITHMN ....

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        int n=haystack.size();
        int m=needle.size();
       vector<int> lps(m,0);
        preprocess(needle,lps);
        int i=0;
        int j=0;
        while(i<n){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
            if(j==m){
                return i-j;
            }
            if(i<n && haystack[i]!=needle[j]){
                if(j){
                    j=lps[j-1];
                }
                else{
                    i++;
                }
            }
        }
      return -1;
        
    }
    
    private:
    void preprocess(string patt, vector<int> &lps){
        int i=1;
        int len=0;
        for(;i<patt.size();){
            if(patt[i]==patt[len]){
                lps[i++]=++len;
            }
            else{
                if(len){
                    len=lps[len-1];
                }
                else{
                    lps[i++]=0;
                }
            }
        }   
    }
};
