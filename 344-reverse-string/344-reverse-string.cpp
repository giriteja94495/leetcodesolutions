class Solution {
public:
    void reverseString(vector<char>& s) {
        // vector<char> input;// O(n)
        // int i; //O(1)
        
        /*
        O(n) - Time complexity
        O(n) - Space complexity 
        */
        // for(int i=s.size()-1; i>=0;i--){
        //     input.push_back(s[i]);
        // }
        // s= input;
        
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
        // int steps = (s.size()+1)/2;
        // while(steps>0){
        //     swap(s[i++],s[j--]);
        //     steps = steps -1;
        // }
        
        while(i<=j){
            swap(s[i++],s[j--]);
        }
        
        
        /*
        a 
        pre increment operator ->  ++a    ->    firstly , it will increase the value then it worries about any thing 
        post increment operator->. a++     ->    firstly , it worries about all the things , then it will increment.
        */
        
        
        
    }
};