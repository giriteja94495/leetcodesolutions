class Solution {
public:
    bool isVowel(char ch){
        return ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }
    bool halvesAreAlike(string s) {
        int n =s.size();
        if(n%2 ==1) return false;
        int count1=0;
        int count2=0;
    
            int i=0;
            int j= n-1;
            while(i<j){
                if(isVowel(s[i])) count1++;
                if(isVowel(s[j])) count2++;
                i++;
                j--;
            }
        
        
        return count1==count2;
    }
};