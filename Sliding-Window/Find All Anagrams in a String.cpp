//   https://leetcode.com/problems/find-all-anagrams-in-a-string/


// very nice and concise solution ,and do remember that every time we compare vectors we are just doing it for a range of numbers .



class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> large(26,0);
        vector<int> small(26,0);
        if(s.size()<p.size()) return {};
        for(int i=0;i<p.size();i++){
            large[s[i]-'a']++;
            small[p[i]-'a']++;
        }
        vector<int> ans;
        if(large==small)
            ans.push_back(0);
        for(int i=p.size();i<s.size();i++){
            large[s[i-p.size()]-'a']--;
            large[s[i]-'a']++;
            if(large==small){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;      
    }
};
