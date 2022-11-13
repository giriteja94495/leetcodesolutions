class Solution {
public:
    string reverseWords(string s) {
        int i =0;
        int j=s.size()-1;
        string temp="";
        vector<string> ans;
        while(i<=j){
        temp="";
        while(i<=j && s[i] != ' '){
          temp+=s[i]; 
            i++;
        } 
        if(temp.size()!=0){
             ans.push_back(temp); 
        } 
        while(s[i] == ' ' && i<=j) {
            i++;
        }
        }
        string res="";
        for(int i=ans.size()-1;i>=0;i--){
            if(i==0) res += ans[i];
            else res += ans[i]+" " ;
        }
        return res;
     
    }
};