class Solution {
public:
    vector<long long> sumOfThree(long long num) {
       long long val=num-3;
        double temp=val/3;
        if(temp*3.0 == val){
            return {val/3,val/3 +1 , val/3+2};
        }
        else {
            return {};
        }
    }
};