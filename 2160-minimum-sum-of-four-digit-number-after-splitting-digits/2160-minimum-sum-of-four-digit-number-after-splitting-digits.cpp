class Solution {
public:
    int minimumSum(int num) {
        vector<int> vec;
        while(num){
            vec.push_back(num%10);
            num/=10;
        }
        sort(vec.begin(),vec.end());
        int f = vec[0] * 10 + vec[2];
        int s = vec[1] * 10 + vec[3];
        
        return f + s;
    }
};