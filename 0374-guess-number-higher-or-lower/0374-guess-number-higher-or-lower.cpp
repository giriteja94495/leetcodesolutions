/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=1;
        int j= n;
        if(i==j) return i;
        while(true){
            int mid= (i + (j-i)/2) ;
            if(guess(mid) == -1){
                j = mid-1;
            }
            else if(guess(mid) == 1){
                i= mid+1;
            }
            else{
                return mid;
            }
        }
        return i;
    }
};