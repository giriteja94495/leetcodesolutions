struct TrieNode {
    TrieNode* children[26] = {};
    string word;
    void addWord(string& word) {
        TrieNode* cur = this;
        for (char c : word) {
            c -= 'a';
            if (cur->children[c] == nullptr) cur->children[c] = new TrieNode();
            cur = cur->children[c];
        }
        cur->word = std::move(word);
    }
};

class Solution {
public:
    int M, N;
    int DIR[5] = {0, 1, 0, -1, 0};
    vector<string> ans;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        ans.reserve(words.size());
        M = board.size(); N = board[0].size();
        TrieNode root;
        for (string& word : words) {
            root.addWord(word);
        }
        
        for (int r = 0; r < M; ++r) {
            for (int c = 0; c < N; ++c) {
                dfs(board, r, c, &root);
            }
        }
            
        return ans;
    }
    void dfs(vector<vector<char>>& board, int r, int c, TrieNode* cur) {
        if (r < 0 || r == M || c < 0 || c == N) {
            return;
        }
        const char orgChar = board[r][c];
        if (orgChar == '#' || (cur = cur->children[orgChar - 'a']) == nullptr) {
            return;
        }
        
        if (!cur->word.empty()) {
            ans.emplace_back(std::move(cur->word));
            // move will reset string
        }
        board[r][c] = '#';
        for (int i = 0; i < 4; ++i) {
            dfs(board, r + DIR[i], c + DIR[i+1], cur);
        }
        board[r][c] = orgChar;
    }
};