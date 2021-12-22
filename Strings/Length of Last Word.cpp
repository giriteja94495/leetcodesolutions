class Solution {
public:
    int lengthOfLastWord(string a) {
     vector<string> s;
        for(int i=0,j=0;i<a.size() && j<a.size();){
            string temp="";
            while(i<a.size() && a[i]!=' '){
                temp+=a[i];
                i++;
                j++;
            }
            s.push_back(temp);
            while(a[j]==' ') j++;
            i=j;
        }
        return s[s.size()-1].size();
    }
};


// https://leetcode.com/problems/length-of-last-word/
