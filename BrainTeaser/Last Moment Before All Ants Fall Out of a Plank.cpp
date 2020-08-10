// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/


class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // if(left.size()==0) return *max_element(right.begin(),right.end());
        // if(right.size()==0) return *max_element(left.begin(),left.end());
        int left_side=left.empty()?0:(*max_element(begin(left),end(left)));
        int right_side=right.empty()?n:(*min_element(begin(right),end(right)));
        return max(left_side,(n-right_side));
    }
};
