class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(auto &a: tokens){
            if(a=="+" || a=="-" || a=="*" || a=="/"){
                long long  val1 = st.top();
                st.pop();
                long long val2 = st.top();
                st.pop();
                string lol = a;
                if(lol == "+")       st.push(val1+val2);
                else if(lol=="-")    st.push(val2-val1);
                else if(lol =="*")   st.push(val1*val2); 
                else if(lol=="/")    st.push(val2/val1);
            }
            else{
                st.push(stoll(a));
            }
        }
        return (int)st.top();
    }
};