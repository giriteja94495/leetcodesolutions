class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
        for(auto a:operations){
            if(a[1]=='-'|| a[1]=='-') count--;
            else count++;
        }
        return count;
    }
};