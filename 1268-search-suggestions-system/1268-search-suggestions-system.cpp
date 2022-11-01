struct TrieNode{
    TrieNode* links[26];
    bool flag = false;
};
class Trie{
     TrieNode* root;
    public:
     Trie(){
         root = new TrieNode();
     }  
     void insert(string word){
         TrieNode *node = root;
         for(int i=0;i<word.size();i++){
             if(!node->links[word[i]-'a']){
                 node->links[word[i]-'a'] = new TrieNode();
             }
             node= node->links[word[i]-'a'];
         }
         node->flag = true;
     }
     bool startsWith(string word){
          TrieNode *node = root;
         for(int i=0;i<word.size();i++){
             if(!node->links[word[i]-'a']){
                 return false;
             }
             node= node->links[word[i]-'a'];
         }
         return true;
     }
  
  vector<string> getAllWordsMatchingWithPrefix(string &prefix){
          TrieNode *node = root;
          vector<string> ans;
          for(char c:prefix){
              node = node->links[c-'a'];
          }
          allWords(node,prefix, ans);
      
          return ans;
    }
    void allWords(TrieNode* node, string prefix, vector<string> &ans){
        if(ans.size() == 3) return ;
        if(node->flag) {
            ans.push_back(prefix);
        }
        for(int i=0;i<26;i++){
            if(node->links[i]){
                allWords(node->links[i],prefix+(char)(i+'a'),ans);
            }
        }
        
        }
    };
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie trie;
        for(auto it: products) trie.insert(it);
        
        vector<vector<string>> ans;
        string s="";
        for(auto a:searchWord){
            s+=a;
            if(!trie.startsWith(s)) ans.push_back({});
            else{
                ans.push_back(trie.getAllWordsMatchingWithPrefix(s));
            }
        }
        return ans;
    }
};