/*Hello Fellow Coder!...so this is the naive approach that every one thinks of but most of the people create integer variable instead of long
integer ..if we use integer then we encounter overflow problem ..This is the not the most optimized solution */
class Solution {
public:
    bool isPalindrome(int x) {
            long int k=x;
        long int v=x;
        long int sum=0;
        while(v!=0){
            sum=sum*10+(v%10);
            v=v/10;
        }
        if(sum==k){
            return true;
        }
        return false;
    }
};
/*So,are you satisfied with this solution?no i don't think so...Lets get to real solution which is more perfect than this
 so ,instead of converting into string and checking the whole reversed integer with the original number ..What we can do is ,we can get only 
 half of the number and reverse it and check it with the other part of the number which clearly tells whether it's a palindrome or not
 but,this works only for even length integers ..what about odd length integers?...yeah what we can do is we can compare the reversed integer with 
 the reduced number or reduced number/10 coz..it will eliminate the middle digit of the number
 but the thing is how will we get to know whether we reached the middle of the number or not........
 when original is greater than reversed integer we go in while loop and and when it is equal or less than it comes out of the loop..but before proceeding 
 further into while loop we have to check few edge cases such as if number is less than zero or if it ends with zero (other than 0 number like 10,20,600 etc..)
 */
 //This is most  preffered solution
 
 class solution{
 public :isPalindrome(int x){
 int reverse=0;
 if((x%10==0&&x!=0)||x<0){
 return false;
 }
 while(x>reverse){
 reverse=reverse*10+x%10;
 x=x/10;
 }
 if(x==reverse||x==reverse/10){
 return true;
 }
 else{
 return false;
 }
 }
 }
 
 
