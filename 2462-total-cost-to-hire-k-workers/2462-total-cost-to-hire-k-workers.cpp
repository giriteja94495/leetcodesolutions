class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> p1, p2;
        int maxPossible = 100001;
        int i =0;
        int j = size(costs)-1;
        long long  ans =0;
        while(k--){
            while(p1.size()<candidates && i<=j) p1.push(costs[i++]);
            while(p2.size()<candidates && i<=j) p2.push(costs[j--]);
            int a = p1.size() ? p1.top() : maxPossible;
            int b = p2.size() ? p2.top() : maxPossible;
            ans += (a<=b?a:b);
            a<=b ? p1.pop(): p2.pop();
        }
        return ans;
    }
};