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
// I felt my above solution is the best .....but it isn't..it can be still optimised further ...see this below one

class Solution {
public:
      int  count=0;
    int trailingZeroes(int n) {
        if(n==0) return 0;
        count=(n/5 + trailingZeroes(n/5));
        return count; // if you hate using global variable ..you can use 1 line code such as return n==0 ? 0 : (n/5+trailingZeroes(n/5));
    }
};
