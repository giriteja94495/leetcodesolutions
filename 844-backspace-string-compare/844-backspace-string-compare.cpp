class Solution {
public:
    string formString(string s){

        for(int i=0;i<s.size();i++){
            if(s[i] == '#') {
                 int j=i-1;
                while(j>=0){
                    if(s[j]!='#'){
                        s[j]='#';
                        break;
                    }
                    j--;
                }
            }
        }
        string lol = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#') lol+=s[i];
        }
        return lol ;
    }
    bool backspaceCompare(string s, string t) {
        string s1= formString(s);
        string s2 = formString(t);
        cout<<s1<<endl;
        cout<<s2<<endl;
        if(s1.size() != s2.size()) return false;
        else{
            for(int i=0;i<s1.size() && i<s2.size();i++){
                if(s1[i]!= s2[i]) return false;
            }
            return true;
        }
    }
};