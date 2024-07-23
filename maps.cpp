#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int,string>m;
    m.insert({1,"hello"});
    m.insert({2,"bro"});
    m.insert({1,"helllo"});
    for(auto value : m){
        cout<<value.first<<" "<<value.second<<endl;
    }
}