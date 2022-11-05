struct TrieNode {
    TrieNode *children[26];
    bool wordEnd = false;
};


class Trie {
public:
    TrieNode *root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *curr = root;
        for(auto a:word){
           int index = a-'a';
            if(curr->children[index]==NULL) curr->children[index]= new TrieNode();
            curr = curr->children[index];
        }
        curr->wordEnd = true;
    }
    
    bool search(string word) {
        TrieNode *curr = root;
        for(auto a:word){
            int index = a-'a';
            if(curr->children[index]==NULL) return false;
            curr = curr->children[index];
        }
        if(curr->wordEnd == true) return true;
        else return false;
    }
    
    bool startsWith(string prefix) {
         TrieNode *curr = root;
        for(auto a:prefix){
            int index = a-'a';
            if(curr->children[index]==NULL) return false;
            curr = curr->children[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */