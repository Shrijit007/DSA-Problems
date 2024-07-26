#include <bits/stdc++.h>
using namespace std;

string isBalanced(string expression) {
    unordered_map<char, char> bracketPairs = { {')', '('}, {']', '['}, {'}', '{'} };
    
    stack<char> s;
    for(char bracket : expression) {
        if(bracket == '(' || bracket == '[' || bracket == '{') {
            s.push(bracket);
        } else {
            if(s.empty() || s.top() != bracketPairs[bracket]) {
                return "NO";
            }
            s.pop();
        }
    }
    
    return s.empty() ? "YES" : "NO";
}
