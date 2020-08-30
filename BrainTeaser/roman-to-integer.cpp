//   https://leetcode.com/problems/roman-to-integer/


// tho not a optimal solution ,it's easy to understand 


class Solution {
public:
    int romanToInt(string s) {
        vector<char> check={'I', 'V', 'X', 'L','C', 'D','M'};
        unordered_map<char,pair<int,int>> mp;
        for(int i=0;i<check.size(); i++){
            if(check[i]=='I') mp[check[i]]={i,1};
            if(check[i]=='V') mp[check[i]]={i,5};
            if(check[i]=='X') mp[check[i]]={i,10};
            if(check[i]=='L') mp[check[i]]={i,50};
            if(check[i]=='C') mp[check[i]]={i,100};
            if(check[i]=='D') mp[check[i]]={i,500};
            if(check[i]=='M') mp[check[i]]={i,1000};
        }
        int sum=0;
        sum=mp[s[s.size()-1]].second;
        int curr=mp[s[s.size()-1]].first;
        for(int i=s.size()-2; i>=0; i--){
            if (mp[s[i]].first>=curr) sum+=mp[s[i]].second;
            else{
                sum-=mp[s[i]].second;
            }
            curr=mp[s[i]].first;
        }
        return sum;
        
    }
};
