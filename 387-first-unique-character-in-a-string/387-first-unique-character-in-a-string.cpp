class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> giri;
        for(auto &a:s){
            giri[a]++;
        }
        for(int i=0;i<s.size();i++){
         if(giri[s[i]]==1){
             cout<< giri[s[i]]<<endl;
             return i;
         }   
        }
            return -1;
    }
};