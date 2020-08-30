//   https://leetcode.com/problems/valid-anagram/


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:s){
        mp[c]++;
    }
        for(char c:t){
            if(mp.find(c)==mp.end()) return false;
            else {
                mp[c]--;
                if(mp[c]==0) mp.erase(c);
            }
        }
        return mp.size()==0;
    }
};
