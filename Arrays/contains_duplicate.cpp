// https://leetcode.com/problems/contains-duplicate/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       // brute force is use 2 for loops and check for every element 
       // sort the array use one pointer and check it's previous element 
      // push the elements into a map,and before pushing check if itis already present in it
       // if the array elements are restricted to it's size ,then we can use bool array      
       unordered_map<int,int> mp;
        for(int i:nums){
            if(mp.find(i)==mp.end()){
                mp[i]++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
