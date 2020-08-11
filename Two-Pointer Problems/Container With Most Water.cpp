//  https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int n=height.size();
        int l=0;
        int r=n-1;
        while(l<r){
            ans=max(ans,(r-l)*(min(height[l],height[r])));   // even though it's zero indexing ,as we are counting only the valley's
                                                             //  between heights we take right-left.
            if(height[l]<height[r]){
                l++;
            }
            else{
             r--;
            }
        }
        return ans;
    }
};
