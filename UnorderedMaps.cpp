#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,string>m;
    m[3]="abs";
    m[1]="bhs";
    m.insert({2,"uhs"});
    for(auto &val : m){
        cout<< val.first<<" "<<val.second<<endl;
    }
}   