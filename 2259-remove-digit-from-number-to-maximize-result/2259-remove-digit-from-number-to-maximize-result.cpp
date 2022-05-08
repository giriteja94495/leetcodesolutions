class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<string> a;
        int i=0;
        while(i<number.size()){
            if(number[i]==digit){
                string s= number.substr(0,i)+ number.substr(i+1,number.size());
                a.push_back(s);
               
            }
             i++;
        }
        sort(a.begin(),a.end());
        return a[a.size()-1];
    }
};