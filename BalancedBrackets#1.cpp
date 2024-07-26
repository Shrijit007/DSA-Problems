#include <bits/stdc++.h>
using namespace std;

string isBalanced(string expression) {
    stack<char> s;
    for(char bracket : expression) {
        if(bracket == '(' || bracket == '[' || bracket == '{') {
            s.push(bracket);
        } else {
            if(s.empty()) {
                return "NO";
            }
            char top = s.top();
            if((bracket == ')' && top == '(') || 
               (bracket == ']' && top == '[') || 
               (bracket == '}' && top == '{')) {
                s.pop();
            } else {
                return "NO";
            }
        }
    }
    return s.empty() ? "YES" : "NO";
}