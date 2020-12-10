class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len=arr.size();
      if(len<3) return false;
      int i=0; // we don't consider the same height grounds 
      while(i+1<len && arr[i]<arr[i+1]) i++; // for increasing ground 
      if(i==0 || i==len-1) return false; // we do know that,peak can never be first or last index
      while(i+1<len && arr[i]>arr[i+1]) i++; // this is for decreasing ground
      return i==len-1; // if we have reached successfully at the end ..it means we found mount or else no
      
    }
};
