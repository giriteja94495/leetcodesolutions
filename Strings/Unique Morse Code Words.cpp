// https://leetcode.com/problems/unique-morse-code-words/

// This solution is quite intutive one , if you find any optimised one please do a PR 



class Solution {
public:
    vector<string> lookup={
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
    };
     unordered_set<string> st;
     
    void go(string p){
        string s="";
        for(char c:p){
            s+=(lookup[c-'a']);
        }
        st.insert(s);
    }
    
    int uniqueMorseRepresentations(vector<string>& words) {
   
        for(string s:words){
            go(s);
        }
        return st.size();
    }
};
