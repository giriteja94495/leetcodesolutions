// https://leetcode.com/problems/k-closest-points-to-origin/
// This is kind of brute force 



class Solution {
public:
    struct{
        bool operator()(const pair<pair<int,int>,double> &a,const pair<pair<int,int>,double> &b){
        return a.second<b.second;
        }
    }compu;
    
    
    double findDistance(int x,int y){
        double ans= (pow(x,2)+pow(y,2));
       return sqrt(ans);
    }
    
    vector<pair<pair<int,int>,double>> result;
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int m=points.size();
        for(int i=0;i<m;i++){
            
    result.push_back({{points[i][0],points[i][1]},findDistance(points[i][0],points[i][1])});
        
        }
        sort(result.begin(),result.end(),compu);
        
        vector<vector<int>> ans;
        
        for(int i=0;i<K;i++){
            ans.push_back({result[i].first.first,result[i].first.second});
        }
        
        return ans;
    }
};
