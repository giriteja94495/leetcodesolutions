class Solution {
public:
    string formGoodString(string s){
        // we traverse thorugh the string and use # to remove all the chars of string
        string ans ="" ;
        // loop through the original string 
        for(int i=0;i<s.size();i++){
            // if we encounter any backspace thqt is '#'
            if(s[i] == '#') {
                // we will just loop back and remove the char until we get a non backspace char 
                int j=i-1;
                while(j>=0){
                    // if we find any backspace char, our work is done so we break from the loop
                    if(s[j]!='#'){
                        s[j]='#';
                        break;
                    }
                    j--;
                }
            }
        }
        // once we have updated the string with all the backspace actions, we form the result string by looping through the string 
        for(char a:s) if(a!='#') ans+=a;
        return ans ;
    }
    bool backspaceCompare(string s, string t) {
        return formGoodString(s)==formGoodString(t);
    }
};