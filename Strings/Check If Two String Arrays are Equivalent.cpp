class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        for(auto a:word1){
            for(int i=0;i<a.size();i++){
                      s1+=(a[i]);
            }
        }
        string s2="";
             for(auto a:word2){
            for(int i=0;i<a.size();i++){
                      s2+=(a[i]);
            }
        }
        cout<<s2<<" "<<s1<<endl;
        return s1==s2;
    }
};
