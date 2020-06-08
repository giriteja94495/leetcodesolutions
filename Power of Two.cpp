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
