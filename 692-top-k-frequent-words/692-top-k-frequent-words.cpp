class Solution {
public:
     static bool comp(const pair<string,int> &p1, const pair<string,int> &p2)
    {
       if(p1.second != p2.second) return p1.second > p2.second;
       else return p1.first < p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int > mp;
        for(auto a:words){
            mp[a]++;
        }
        vector<pair<string,int>> pr;
        for(auto itr= mp.begin();itr!=mp.end();itr++){
            
            pr.push_back(make_pair(itr->first, itr->second));
        }
        sort(pr.begin(),pr.end(),comp);
        vector<string> ans;
        int count = k;
        for(int i=0;i<pr.size();i++){
            if(k==0) break;
            else{
                k--;
                ans.push_back(pr[i].first);
            }
        }
        return ans;
    }
};