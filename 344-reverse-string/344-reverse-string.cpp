class Solution {
public:
    void reverseString(vector<char>& s) {
//         vector<char> input;// O(n)
//         int i; //O(1)
        
//         /*
//         O(n) - Time complexity
//         O(n) - Space complexity 
//         */
//         for(int i=s.size()-1; i>=0;i--){
//             input.push_back(s[i]);
//         }
//         s= input;
        
        /*
        O(1) - space complexity
      
        ["g","i","r","i"] - size = 4 even 
        n/2 steps  = 2 
        step 1 :   ["i","i","r","g"]
      
        step2  :    ["i","r","i","g"]
      
        input size = 7 odd
         n+1/2 = 4
        [ s w a p n i l]
        step1 [l w a p n i s]
        step2 [l i a p n w s]
        step3 [l i n p a w s]
        step4 [l i n p a w s]
        */
        int i=0;
        int j = s.size()-1;
        int steps = (s.size()+1)/2;
        while(steps>0){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            steps = steps -1;
            i++;
            j--;
        }
        
        
    }
};