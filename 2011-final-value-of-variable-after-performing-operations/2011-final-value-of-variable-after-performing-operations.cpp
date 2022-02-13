class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
        for(auto a:operations){
            if(a=="--X" || a=="X--") count--;
            else count++;
        }
        return count;
    }
};