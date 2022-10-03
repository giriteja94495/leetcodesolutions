class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lefts(height.size());
        lefts[0]= height[0];
        vector<int> rights(height.size());
        rights[height.size()-1]=height[height.size()-1];
        
        int maxLeft=lefts[0];
        int maxRight=height[height.size()-1];
        
        for(int i =1,j=height.size()-2;i< height.size() && j>=0;i++,j--){
            if(height[i]>maxLeft) {
                maxLeft = height[i];
                lefts[i] = maxLeft;
            }
            else{
                lefts[i]=maxLeft;
            }
            
            if(height[j]> maxRight){
                maxRight = height[j];
                rights[j]= maxRight;
            }
            else{
                rights[j] = maxRight;
            }
        }
        int res=0;
        int n = lefts.size();
        for(int i=0;i<n ;i++)
        {
            res+=(min(lefts[i],rights[i])- height[i]);
        }    
        return res;
    }
};