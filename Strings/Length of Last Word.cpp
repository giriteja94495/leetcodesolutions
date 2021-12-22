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


// the solution i loved


class Solution {
    public int lengthOfLastWord(String s) {
        int length = 0;
		
		// We are looking for the last word so let's go backward
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') { // a letter is found so count
                length++;
            } else {  // it's a white space instead
				//  Did we already started to count a word ? Yes so we found the last word
                if (length > 0) return length;
            }
        }
        return length;
    }
}
