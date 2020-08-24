// https://leetcode.com/problems/factorial-trailing-zeroes/

// I felt satisfied after writing this code ...it's log(n) time tho 

class Solution {
public: 
    int trailingZeroes(int n) {
        int  count=0;
        int i=n;
        while(i>0){
            int temp=i;
            bool flag=false;
            while(temp%5==0){
                count++;
                temp=temp/5;
                flag=true;
            }
            if(flag) i-=5;
            else i--;
        }
        return count;
    }
};
