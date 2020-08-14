// https://leetcode.com/problems/reorganize-string/
 


class Solution {
public:
    string reorganizeString(string S) {
        unordered_map<char,int> mp;
        for(char c:S){
            mp[c]++;
        }
        priority_queue<pair<int,char>> pq;
        
        for(auto &itr:mp){
            pq.push({itr.second,itr.first});
        }
        
        string ans="";
        while(pq.size()>1){
            char ch1=pq.top().second;
            pq.pop();
            char ch2=pq.top().second;
            pq.pop();
            ans+=ch1;
            ans+=ch2;
            if(mp[ch1]>1){
                mp[ch1]--;
                pq.push({mp[ch1],ch1});
            }
            if(mp[ch2]>1){
                mp[ch2]--;
                pq.push({mp[ch2],ch2});
            }
            
        }
        if(!pq.empty()){
            char ch=pq.top().second;
            if(mp[ch]>1) return "";
                
            else{
                ans+=ch;
            }
        
        }
           return ans;
   
    }
};


// Not my solution tho ! but loved the approach 
