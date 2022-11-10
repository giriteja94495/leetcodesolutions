class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
                if(!st.empty() && s[i] == st.top()){
                    st.pop();
                }
                else{
                  st.push(s[i]);
                }
        }
        vector<char> ans(st.size());
        int size = st.size()-1;
        while(!st.empty()){
            ans[size--] = st.top();
            st.pop();
        }
        string a ;
        for(auto b:ans){
            a+=b;
        }
        return a;
    }
};