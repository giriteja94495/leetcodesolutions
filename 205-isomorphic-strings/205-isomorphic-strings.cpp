class Solution {
public:
    /*
     unordered_map<char,int> mp1;
          for(char c: s){
              mp1[c]++;
          }
          vector<int> counts1;
          for(auto itr= mp1.begin();itr!=mp1.end();itr++){
              counts1.push_back(itr->second);
          } 
          unordered_map<char,int> mp2;
          for(char c: t){
              mp2[c]++;
          }
          vector<int> counts2;
          for(auto itr= mp2.begin();itr!=mp2.end();itr++){
              counts2.push_back(itr->second);
          } 
          if(counts1.size() != counts2.size()) return false; 
          sort(counts1.begin(),counts1.end());
          sort(counts2.begin(),counts2.end());
          for(int i=0;i<counts1.size();i++){
              if(counts1[i]!=counts2[i]) return false;
          } 
           return true;
    */
    bool isIsomorphic(string s, string t) {
       int m= s.size();
       int n = t.size();
       if(m!=n) return false;
       else{
         vector<int> a(256,-1);
         vector<int> b(256,-1);  
         for(int i=0;i<m;i++){
             if(a[s[i]] != b[t[i]]) return false;   
             
              a[s[i]] = i+1;
              b[t[i]] = i+1;
             
             
         }
           return true;
       } 
        
    }
};
