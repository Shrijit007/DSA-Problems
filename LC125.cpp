#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string word;
    for (char letter : s) {
        if (isalpha(letter)) {
            word.push_back(letter);
        }
    }
    int l=0,r=word.length()-1;
    while(l<r){
        if(word[l]==word[r]){
            l++;
            r--;
        }
        else return false;
    }
    return true;
}

int main(){
    string s = "OP";
    cout<<isPalindrome(s);
}