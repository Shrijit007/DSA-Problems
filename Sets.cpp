#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string>s;
    s.insert("abc");
    s.insert("xyz");
    for(auto &val : s){
        cout<<val<<" ";
    }
    unordered_set<int>us;
    us.insert(1);
    us.insert(2);
    for(auto &value : us){
        cout<<value<<" ";
    }
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    for(auto &values : ms){
        cout<<values<<" ";
    }
}