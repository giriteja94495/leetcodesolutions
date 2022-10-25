class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(auto a:word1) s1+=a;
        for(auto a:word2) s2+=a;
        return s1==s2;
    }
};