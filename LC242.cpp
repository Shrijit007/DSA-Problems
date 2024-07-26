#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) return false;
    unordered_map<char,int>count_s;
    for(char c : s) count_s[c]++;
    for(char c : t){
        if(count_s.find(c) == count_s.end() || count_s[c] == 0){
            return false;
        }
        count_s[c]--;
    }
    return true;
}

int main(){

}