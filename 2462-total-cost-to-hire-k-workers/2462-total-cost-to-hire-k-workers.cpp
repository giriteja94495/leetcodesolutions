class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> p1, p2;
        long size = costs.size();
        long maxPossible =100002;
        long i =0;
        long j = size-1;
        long long  ans =0;
        while(k--){
            while(p1.size()<candidates && i<=j) p1.push(costs[i++]);
            while(p2.size()<candidates && i<=j) p2.push(costs[j--]);

            int a = p1.size() ? p1.top() : maxPossible;
            int b = p2.size() ? p2.top() : maxPossible;
            
            if(a<=b){
                ans+=a;
                p1.pop();
            }
            else{
                ans+=b;
                p2.pop();
            }
            
        }
        return ans;
    }
};