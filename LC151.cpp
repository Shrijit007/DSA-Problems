#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0, j = 0;

        while (i < n && s[i] == ' ') i++;
        while (i < n) {
            while (i < n && s[i] != ' ') s[j++] = s[i++];
            while (i < n && s[i] == ' ') i++;
            if (i < n) s[j++] = ' ';
        }
        s.resize(j);
        reverse(s.begin(), s.end());
        int start = 0;
        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};

int main(){
    Solution str;
    string s = "  hello     world  ";
    string g = str.reverseWords(s);
    cout<<g;
}