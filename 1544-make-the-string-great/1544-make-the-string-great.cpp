class Solution {
public:
    string makeGood(string s) {
        if(s.size()<=1) return s;
          int n =0;
         while (n != s.size()) {
        n = s.size();
        for(int i =0;i+1<s.size();i++){
            if(s[i+1]-s[i] == 32 || s[i]-s[i+1]==32){
                s= s.substr(0,i)+s.substr(i+2);
            }
        }
         }
        return s;
        
    }
};