class Solution {
public:
    int countTheNumberOfWords(string s){
        int count=0;
        int len=s.size();
        for(int i=0;i<len;i++){
            int count2=0;
            // i forgot to check the i<s.length() condition , it took me 5mins to resolve the error
            while(i<s.length() && s[i]!=' '){
                i++;
                count2++;
            }
            if(count2) count++;
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans=INT_MIN;
        for(auto a:sentences){
            ans=max(ans,countTheNumberOfWords(a));
        }
        return ans;
    }
};