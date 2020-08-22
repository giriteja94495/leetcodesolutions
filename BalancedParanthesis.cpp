class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return false;
        }
      
        stack<char>temp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                temp.push(s[i]);
                continue;
                
            }
            if (temp.empty()) 
           return false; 
            char giri=s[i];
            char x;
            switch(giri){
                case ')':x=temp.top();
                    temp.pop();
                    if(x=='{'||x=='['){
                        return false;
                        
                    }
                    break;
                    case ']':x=temp.top();
                    temp.pop();
                    if(x=='{'||x=='('){
                        return false;
                        
                    }
                    break;
                    case '}':x=temp.top();
                    temp.pop();
                    if(x=='('||x=='['){
                        return false;
                        
                    }
                    break;
                    }
        }
     
       return (temp.empty());
    }
};

// quite simple approach from the above solution

class Solution {
public:
    
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==1) return false;
        if(s.size()==0) return true;
        for(char c:s){
            if(c=='(') {
                st.push(')');
            }
            else if(c=='{'){
                st.push('}');
            }
            else if(c=='['){
                st.push(']');
            }
          else{
            if(st.empty() || (st.top()!=c)){
                return false;
            }
                else{
                    st.pop();
                }
            }
    }
   return st.size()==0;
  }
};
