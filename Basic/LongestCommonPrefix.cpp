// https://leetcode.com/problems/longest-common-prefix/


// Naive Solution

class Solution {
public:
    string match(string a, string b){
        int count=0,i=0,j=0;
        while(i<a.size()){
            if(a[i]==b[i]){
                i++;
                count++;
            }
            else{
                break;
            }
        }
        return a.substr(0,count);
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
         sort(strs.begin(),strs.end(),[](const string &a,const string &b){
             return a.size()>b.size();
         });
        int maxlen=strs[0].size();
        string temp=strs[0];
        for(int i=1; i<strs.size(); i++){
            temp=match(temp,strs[i]);
        }
        return temp;
    }
};


// SMART SOLUTION

class Solution {
public:
  
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        // this inbuilt sorting is done according to lexicographical order ...don't forget this
         sort(strs.begin(),strs.end());
       string a=strs[0];
       string b=strs[strs.size()-1];
       int count=0;
        while(count<a.size()){
            if(a[count]==b[count]){
                count++; 
            }
            else{
                break;
            }
        }
        return a.substr(0,count);
    }
};
