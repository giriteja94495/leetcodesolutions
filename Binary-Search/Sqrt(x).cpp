
class Solution {
public:
    int mySqrt(int x) {
       long long int low=0;
       long long int high=x;
        long long int mid;
        while(low<high){
        mid=low+(high-low)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x){
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
        }
        return low*low>x?low-1:low;
    }
};
