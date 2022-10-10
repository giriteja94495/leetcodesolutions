class Solution {
public:
    static bool comp(const vector<int>&a , const vector<int>&b){
        return (a[2] > b[2]) || (a[2] == b[2] && a[0]<b[0]) ;
    }
    int hardestWorker(int n, vector<vector<int>>& logs) {
      for(int i=0;i<logs.size();i++){
          if(i==0){
              logs[i].push_back(logs[i][1]);
          }
          else{
              logs[i].push_back(logs[i][1] - logs[i-1][1]);
          }
      }
      sort(logs.begin(),logs.end(),comp);
      return logs[0][0];  
    }
};