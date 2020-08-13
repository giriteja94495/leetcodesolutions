// https://leetcode.com/problems/remove-element/


class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int j=arr.size();
        int i=0;
        
        while(i<j){
            if(arr[i]==val){
                arr[i]=arr[j-1];
                j--;
                
            }
            else{
                i++;
            }
        }
        return j;
    }
};

// this seemed very simple ,but i had to put more than 10 mins to arrive at the O(N) solution
