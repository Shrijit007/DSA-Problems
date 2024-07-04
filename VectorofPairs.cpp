#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,string>> &v){
    for (int i = 0; i < v.size(); i++){
       cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){
    vector <pair<int,string>> v;
    v.push_back({1,"a"});
    v.push_back({2,"b"});
    v.push_back({3,"c"});
    printVec(v);
}