class Solution {
public:
    bool check(string &s, string &t,int i,int j){
        if(i==s.size()){
            return true;
        }
        j=t.find(s[i],j);
        if(j!=  string::npos){
            return check(s,t,i+1,j+1);
        }
        else{
            return false;
        }
    }
    bool isSubsequence(string s, string t) {
        return check(s,t,0,0);
    }
};
