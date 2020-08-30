// https://leetcode.com/problems/power-of-three/


// logarithmn approach doesn't work here coz precison of 243 is nearly same and it won't be equal....
// just tell the recursive approach and explain this iterative one in interview ..it should be good enough

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n!=1 && n<3) return false;
        while(n>=3){
            if(n%3!=0) 
                return false; 
            n=n/3;
        }
        return n==1;
    }
};


// recursive approach  (ONE LINER)
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 && (n==1 || ( n%3==0 && isPowerOfThree(n/3)));
    }
};
