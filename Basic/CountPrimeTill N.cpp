//  https://leetcode.com/problems/count-primes/

// Naive Solution

class Solution {
public:
    bool isprime(int n){
        for(int i=3;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimes(int n) {
        if(n<=2) return 0;
        if(n==3) return 1;
        int count=1;
        for(int i=3;i<n;i=i+2){
            if(isprime(i)){
                count++;
            }
        }
        return count;
        
    }
};



// Efficient Solution

class Solution {
public:
    int countPrimes(int n) {
        // these are well known cases to everyone 
        if(n<=2) return 0;
        // let's assume that all the numbers till n are prime
      vector<bool> arr(n,true);
        // oh shit ! 0 is not a prime right ...
        arr[0]=false;
        // and yeah ,even 1 is not a prime 
        arr[1]=false;
        // primes encountered so far
        int count=0;
        
        for(int i=2;i<(n);i++){
            // so 2 is a prime ...we know that 
            if(arr[i]){
                // add it to our count list
                count++;
                // let's mark all the multiples of i from i to n(not inclusive) as not prime..i.e, mark them as false;
                for(long j=i; j*i<n; j++){
                    arr[j*i]=false;
                }
            }
        }
        
        // hurrah! we finally did count all the numbers 
        return count;
    }
};
