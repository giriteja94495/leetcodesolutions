//   https://leetcode.com/problems/nim-game/


class Solution {
public:
    bool canWinNim(int n) {
        if(n%4 == 1 || n%4==2 || n%4==3 ) return true;
        else return false;
    }
};
