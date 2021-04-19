class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> al(26,1);
        for(char c:sentence){
           al[c-'a']--;
        }
        bool ans=true;
       for(auto a:al){
          if(a==1){
           return false;
          }
        
      }
        return true;
    }
};
