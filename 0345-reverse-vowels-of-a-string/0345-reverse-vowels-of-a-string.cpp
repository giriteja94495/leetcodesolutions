class Solution {
public:
    bool checkIfItIsVowel(char c){
        if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
        else return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j= s.size()-1;        
       for(;i<=j;){
           if(checkIfItIsVowel(s[i]) == true  && checkIfItIsVowel(s[j])== true){
               swap(s[i++],s[j--]);
           }
           else if(checkIfItIsVowel(s[i]) == true ){
               j--;
           }
           else if(  checkIfItIsVowel(s[j]) == true){
               i++;
           }
           else{
               i++;
               j--;
           }
       }
        return s;
    }
};