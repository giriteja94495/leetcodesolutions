class Solution {
public:
    bool doTheyDifferByOneChar(string a ,string b){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int count =0;
        for(int i =0;i<8;i++){
            if(a[i]!=b[i]) count++;
        }
        return count==1;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_map<string,bool> mp ;
        if(bank.size()==0) return -1;
        else{
            int steps =0;
            queue<string> q;
            unordered_set<string> st;
            q.push(start);
            st.insert(start);
            while(!q.empty()){
                int size= q.size();
                
                for(int j=0;j<size;j++){
                    string temp = q.front();
                    q.pop();
                    if(temp==end) return steps;
                    vector<char> genes;
                    genes.push_back('C');
                    genes.push_back('A');
                    genes.push_back('G');
                    genes.push_back('T');
                    
                    for(char c:genes){
                        for(int i =0;i<temp.size();i++){
                            string lol = temp;
                                lol[i] = c;
                            if(!st.count(lol) && find(bank.begin(),bank.end(),lol) != bank.end()){
                                q.push(lol);
                                st.insert(lol);
                            }
                        }
                    }
                }
                steps++;
            }
            return -1;
        }
    }
};