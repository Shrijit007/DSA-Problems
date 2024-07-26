#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>m;
    m[3]="abs";
    m[1]="bhs";
    m.insert({2,"uhs"});
    for(auto &val : m){
        cout<< val.first<<" "<<val.second<<endl;
    }
    auto it = m.find(3);
    cout<<(*it).first<<" "<<(*it).second<<endl;
    m.erase(1);
    for(auto &val : m){
        cout<< val.first<<" "<<val.second<<endl;
    }
}