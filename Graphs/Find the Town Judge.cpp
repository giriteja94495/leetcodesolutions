class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trusts(N+1),trusted(N+1);
       for(int i=0;i<trust.size();i++){
           trusts[trust[i][0]]++;
           trusted[trust[i][1]]++;
       }
        for(int i=1;i<=N;i++){
            if(trusts[i]==0 && trusted[i]==N-1){
                return i;
            }
         }
        return -1;
    }
};
