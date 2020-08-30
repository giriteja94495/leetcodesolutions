// https://leetcode.com/problems/largest-rectangle-in-histogram/

// This question is super useful in many of  the  problems

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       stack<int> st;
       heights.push_back(0);
        int ans=0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int top=heights[st.top()];
                st.pop();
                int ran=st.empty()?-1:st.top();
                ans=max(ans,(top*(i-ran-1)));
            }
            st.push(i);
        }
        return ans;
    }
}; 
