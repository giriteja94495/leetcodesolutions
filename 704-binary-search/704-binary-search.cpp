class Solution {
public:
    int search(vector<int>& arr, int target) {
        int left=0;
        int right=arr.size()-1;
        int mid;
        while(left<=right){
             mid=left+(right-left)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]<target) left=mid+1;
            else right=mid-1;
           
        }
        return -1;
    }
};