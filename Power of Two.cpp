class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        int temp=(int)(log2(n));
        if(temp==log2(n)){
            return true;
        }
        return false;
        
    }
};

// this previous solution is so stupid ...it didn't strike me to use the concept of set bit count
// THIS CAN BE EASILY SOLVED USING Brian Kernighan’s Algorithm:
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n==0) return false; 
        return !(n&(n-1));
    }
};

// the above can be simplified further into 
// if n is 0 ,we return false ....am i right? so lets combine both the statements as return (n & !(n & n-1));
