// https://leetcode.com/problems/median-of-two-sorted-arrays/


// EFFICIENT SOLUTION ...BUT I THINK IT CAN BE STILL OPTIMIZED ....I WAS GETTING 100ms TIME 

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<double> pq1;
        priority_queue<double ,vector<double>,greater<double>> pq2;
        
        for(auto a:nums1){
            pq1.push(a);
            pq2.push(a);
        }
        
        for(auto a:nums2){
            pq2.push(a);
            pq1.push(a);
        }
        
        int count=pq1.size()/2;
        
        while(count--){
            pq1.pop();
            pq2.pop();
        }
        
        return (pq1.top()+pq2.top())/2;
    }
};
