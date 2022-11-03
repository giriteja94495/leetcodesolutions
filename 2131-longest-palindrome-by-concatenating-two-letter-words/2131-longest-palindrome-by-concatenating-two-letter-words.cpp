class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string , int> mp;
        int count =0;
        for(int i=0;i<words.size();i++) {
            string temp =  words[i];
            reverse(temp.begin(), temp.end());
            if(mp[temp]>0){
                count+=4;
                mp[temp]--;
            }
            else{
                mp[words[i]]++;
            }
        }
        for(auto itr= mp.begin();itr!=mp.end();itr++){
               string temp = itr->first;
            if(itr->second>0 && temp[0] == temp[1]){
                    count+=2;
                    break;
                }
        }
        return count;
    }
};