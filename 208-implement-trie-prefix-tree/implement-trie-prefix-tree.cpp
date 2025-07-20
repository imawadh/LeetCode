class TrieNode{
    public:
       vector<TrieNode*> v;
       bool isEnd;
       TrieNode(){
            v.resize(27,nullptr);
            isEnd = false;
       }
    
};
class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        int n = word.size();
        TrieNode* temp = root;
        for(int i =0;i <n; i++){
            if(temp->v[word[i]-97]==nullptr){
                TrieNode* newNode = new TrieNode();
                temp->v[word[i]-97] = newNode; 
            }
            temp = temp->v[word[i]-97];
        }
        temp->isEnd = true;
    }
    
    bool search(string word) {
        int n = word.size();
        TrieNode* temp = root;
        for(int i =0;i <n; i++){
            if(temp->v[word[i]-97]==nullptr){
                return false;
            }
            temp = temp->v[word[i]-97];
        }
        return temp->isEnd;
    }
    
    bool startsWith(string word) {
        
        int n = word.size();
        TrieNode* temp = root;
        for(int i =0;i <n; i++){
            if(temp->v[word[i]-97]==nullptr){
                return false;
            }
            temp = temp->v[word[i]-97];
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