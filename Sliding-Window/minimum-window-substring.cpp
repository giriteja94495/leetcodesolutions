


        
class Solution {
public:    
    string minWindow(string s, string t) {
        // if size of t is more than s then return empty string 
        if(t.size()>s.size()) return "";
        
        // Let's create a map for count of chars in t
        unordered_map<char,int> mp;
        for(char c:t){
        mp[c]++;
        }
 
        // let's create the two pointers which would help us slide through the entire s
        int begin=0;
        int end=0;
        int len=INT_MAX;
        int counter=mp.size();
        
        // final string that we return 
        
        string ans;
        
        while(end<s.size()){
        char c= s[end];
        if(mp.find(c)!=mp.end()){
           mp[c]--;
           if(mp[c]==0) counter--;            // this checks for the case where we count of char is zero ex: mp={a:2,b:1}
                                              // when we encounter a we decrease the count of a to 1 but when we encounter 
                                              // one more a ,we don't have any more a's left in our map ,so hence we decrease counter
        }
        }
        end++;
        
        while(counter==0){                    // when we get the substring of s that matches the chars in t
         if(end-begin < len){
           len=end-begin;
           ans=s.substr(begin,len);
         }
        
        char start=s[begin];
        if(mp.find(start)!=mp.end()){
           mp[start]++;
           if(mp[start]>0) counter++;
        }
        begin++:
        
        }
        }
        return ans;
        }
  
};
