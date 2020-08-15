//  https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/


// Not a optimal solution tho!

class Solution {
public:
    
    int count(int num)
    {
        int ans=0;
        while(num){
            ans+=(num&1);
            num=num>>1;
        }
        return ans;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> res;
        
        for(int i=0;i<arr.size();i++)
            res.push_back({arr[i],count(arr[i])});
 
        sort(res.begin(),res.end(),[](const pair<int,int> a ,const pair<int,int> b){
           if(a.second!=b.second){
               return a.second<b.second ;
           }
            else{
                return a.first<b.first;
            }
        });
        
        for(int i=0;i<res.size();i++)
            arr[i]=res[i].first;
        
        return arr;
        
        
    }
};
