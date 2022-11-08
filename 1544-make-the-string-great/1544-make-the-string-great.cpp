class Solution {
public:
    string makeGood(string s) {
        if(s.size()<=1) return s;
        int n = s.size();
        stack<char> st;
        
        for(int i =0;i<s.size();i++){
          if(!st.empty() && abs(st.top() -s[i])==32){
              st.pop();
          }
            else{
                st.push(s[i]);
            }
        }
        vector<char> ans(st.size());
        int index = st.size()-1;
        while(!st.empty()){
            ans[index--] = st.top();
            st.pop();
        }
        string val="";
        for(auto a:ans){
            val+=a;
        }
        return val;
        
    }
};