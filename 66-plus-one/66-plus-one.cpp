class Solution {
public:
    vector<int> giveMeSimpler(vector<int>& digits,int lastDigit,int n){
        int size=n;
       if(lastDigit==0){
           if(size==0){
               digits.push_back(0);
               digits[0]=1;
               return digits;
           }
           else{
                 int lastValue=digits[size-1];
             if(lastValue<9){
                digits[size-1]+=1;
                 return digits;
             }
           else{
               digits[size-1]=0;
               giveMeSimpler(digits,0,size-1);
           }
           }
         
       }
    
    return digits;

 
    }
    vector<int> plusOne(vector<int>& digits) {
     
        
        int n=digits.size();
        int lastValue=digits[n-1];
        if(lastValue<9){
            digits[n-1]+=1;
            return digits;
        }
            digits[n-1]=0;
           return giveMeSimpler(digits,0,n-1);
    }
};