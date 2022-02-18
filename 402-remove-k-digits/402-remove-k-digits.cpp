class Solution {
public:
    string removeKdigits(string num, int k) {
        int len=num.size();
         if(k==len) return "0";
        stack<char> st;
       for(auto c:num){
           while( !st.empty() && k>0 && st.top()>c){
               st.pop();
               k--;
           }
           if(!st.empty() || c!='0') st.push(c);
       }
      // while(st.top()=='0'){
      //     st.pop();
      // }
        string ans="";
        while(!st.empty() && k--){
            st.pop();
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        string ans_1="";
        for(int i=ans.size()-1;i>=0;i--){
            ans_1+=ans[i];
        }
        return ans_1==""?"0":ans_1;
        
    }
};

/*
string removeKdigits(string num, int k) {
        string ans="";
        for(char &c:num)
        {
            while(ans.size() && ans.back()>c &&k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size()||c!='0')ans.push_back(c);
        }
        while(ans.size()&&k--)           <-------this look is to make sure we fulfil the deletion condition
        {
            ans.pop_back();
        }
        return (ans=="")?"0":ans;
    }
*/