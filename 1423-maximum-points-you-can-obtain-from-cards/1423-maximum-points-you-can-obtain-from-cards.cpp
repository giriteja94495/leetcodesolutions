class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     int total = 0;
     int i=0;
     int j= cardPoints.size();
     for(i =0;i<k;){
         total+=cardPoints[i++];
     }
     i--;
     j--;   
     int ans= total;   
     while(i>=0){
         total-=cardPoints[i--];
         total+=cardPoints[j--];
         ans = max(total,ans);
     }   
        return ans;
    }
};