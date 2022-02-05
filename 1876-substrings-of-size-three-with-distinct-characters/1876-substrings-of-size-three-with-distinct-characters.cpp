class Solution {
public:
    bool isGood(string str){
        unordered_map<char,int> mp;
        for(char a:str){
        mp[a]++;    
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            cout<<itr->second<<str<<endl;
            if(itr->second>1) return false;
        }
        return true;
    }
    int countGoodSubstrings(string s) {
        // set<char> st;
        if(s.size()<3){
            return 0;
        }
//         else{
//             for(int i =0;i<s.size();i++){
                
//             }
//         }
        
        int count=0;
        for(int i=0;i<=s.size()-3;i++)
        {
            string str=s.substr(i,3);
            if(isGood(str)){
                count++;
            }
            
        }
        return count;
    }
};