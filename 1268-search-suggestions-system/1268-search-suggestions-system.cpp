// a struct class to store the TrieNode 
struct TrieNode{
    TrieNode* links[26];
    bool flag = false;
};

// class that performs the actions of trie
class Trie{
    private :
    // create a root TrieNode
     TrieNode* root;
    
    public:
    // initialise that root in constructor 
     Trie(){
         root = new TrieNode();
     }  
    // perform the insertion of word into your trie
     void insert(string word){
         TrieNode *node = root;
         for(int i=0;i<word.size();i++){
              // if the char doesn't exist ,just create a new reference trie for the char
             if(!node->links[word[i]-'a']){
                 node->links[word[i]-'a'] = new TrieNode();
             }
             node= node->links[word[i]-'a'];
         }
         // once you perform the full insertion , make the flag as true;
         node->flag = true;
     }
    // we are checking if the prefix is present in the trie, this function is not that mandatory as we can do this check in the below function also , but for better readability , i have written this 
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
          // for every prefix, firstly ,we loop through the trie and find the node where the prefix is ending in the trie
          TrieNode *node = root;
          // final answer
          vector<string> ans;
          // loop in the trie until the prefix ends ,
          for(char c:prefix){
              node = node->links[c-'a'];
          }
          // now our node is pointing to the reference node of the last char in prefix , this is where we built up all the words that can be formed by using this prefix , we are the passing. the ans as reference , keep that in mind 
          allWords(node,prefix, ans);
          // return the ans , after the above function adds all the respective words
          return ans;
    }
    void allWords(TrieNode* node, string prefix, vector<string> &ans){
        // as i need only top 3 suggestions so i return when i acheive that 
        if(ans.size() == 3) return ;
        // i look for the full word, so until that is met , i can't add it to my answer list 
        if(node->flag) {
            ans.push_back(prefix);
        }
        // why am i looping like this ?
        /*
        as they said that , they want lexicographically order, i go from 0th index('a') of my last prefix trienode to 25th index('z') 
        */
        for(int i=0;i<26;i++){
            if(node->links[i]){
                // everytime i find the link node, i would add that to my ans list and proceed for the next i 
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