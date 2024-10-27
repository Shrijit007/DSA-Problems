#include <bits/stdc++.h>
using namespace std;

struct Node{
    // Initialize links with 26 alphabets
    Node *links[26];
    // Flag to check if the node is the end of the word
    bool flag = false;

    // Check if the character is present in the node
    bool contains(char c){
        return links[c - 'a'] != NULL;
    }

    // Insert a character in the node
    void insert(char c, Node* node){
        links[c - 'a'] = node;
    }

    // Get the node of a character
    Node* get(char c){
        return links[c - 'a'];
    }

    // Set the flag to true at the end of the word
    void setEnd(){  // Changed return type to `void`
        flag = true;
    }

    // Check if the node is the end of the word
    bool isEnd(){
        return flag;
    }
};

class Trie{
private:
    // Root node of the Trie
    Node* root;

public:
    // Constructor to initialize the root node
    Trie(){
        root = new Node();
    }

    // Insert a word into the Trie
    void insert(string word){
        Node* node = root;
        for(int i = 0; i < word.length(); i++){
            if(!node->contains(word[i])){
                node->insert(word[i], new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }

    // Search for a word in the Trie
    bool search(string word){
        Node* node = root;
        for(int i = 0; i < word.length(); i++){
            if(!node->contains(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    // Check if a prefix exists in the Trie
    bool startsWith(string prefix){
        Node* node = root;
        for(int i = 0; i < prefix.length(); i++){
            if(!node->contains(prefix[i])){
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
};

int main(){
    Trie trie;
    trie.insert("apple");
    cout << trie.search("apple") << endl; // returns true
    cout << trie.search("app") << endl; // returns false
    cout << trie.startsWith("app") << endl; // returns true
    trie.insert("app");
    cout << trie.search("app") << endl; // returns true
    return 0;
}
