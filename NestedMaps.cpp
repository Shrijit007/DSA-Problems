#include <bits/stdc++.h>
using namespace std;

int main(){
    map<pair<string,string>,vector<int>>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        int c;
        cin>>c;
        for(int j=0;j<c;j++){
            int x;
            cin>>x;
            m[{s1,s2}].push_back(x);
        }
    }
    for(auto &pr : m){
        auto &str = pr.first;
        auto &vec = pr.second;
        cout<< str.first <<" "<< str.second<<" ";
        for(auto &element : vec){
            cout<<element<<" ";
        } 
        cout<<endl;
    }
}