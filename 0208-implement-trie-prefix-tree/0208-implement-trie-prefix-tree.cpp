class Trie {
    private:
     Trie *nodes[26];
     bool isEnd = false;
public:
    Trie() {
        for(int i=0;i<26;i++){
            nodes[i] = NULL;
        }
        isEnd = false;
    }
    
    void insert(string word) {
        Trie *node  = this;
        for(auto a: word){
            int index = a-'a';
            if(!node->nodes[index]) node->nodes[index] = new Trie();
             node = node->nodes[index];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        Trie *node = this;
        for(auto a: word){
            int index = a-'a';
            if(!node->nodes[index]) return false;
            node = node->nodes[index];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
         Trie *node = this;
        for(auto a: prefix){
            int index = a-'a';
            if(!node->nodes[index]) return false;
            node = node->nodes[index];
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