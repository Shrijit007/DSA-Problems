#include<bits/stdc++.h>
using namespace std;

    int lengthOfLastWord(string s) {
        map<int,multiset<char>>sentence;
        int i = 1,pos;
        for( char letter : s ){
            if(letter == ' '){
                sentence[0].insert(letter);
                i++;
            }
            else{
                sentence[i].insert(letter);
                pos=i;
            }
        }
        return sentence[pos].size();
    }

int main(){
    string s = "   fly me   to   the mood  ";
    cout<<lengthOfLastWord(s);
}