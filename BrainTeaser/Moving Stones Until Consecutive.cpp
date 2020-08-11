// https://leetcode.com/problems/moving-stones-until-consecutive

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
     vector<int> giri={0,0};
       
        vector<int> arr={a,b,c};
       sort(arr.begin(),arr.end());
        int p,q,r;
        p=arr[0];
        q=arr[1];
        r=arr[2];
        
       if(r-p==2) return giri;
        giri[0]=min(arr[1]-arr[0],arr[2]-arr[1])<=2?1:2;
        giri[1]=arr[2]-arr[0]-2;
        return giri;
        
    }
};
