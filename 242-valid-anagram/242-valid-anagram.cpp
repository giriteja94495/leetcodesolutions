class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> all_char(26,0);
        for(auto a:s){
            all_char[a-'a']++;
        }
        for(auto a:t) all_char[a-'a']--;
        
        
        for(auto a:all_char) if(a!=0) return false;
        return true;
    }
};