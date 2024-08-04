#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,4,1,3};
    cout<<all_of(v.begin(),v.end(),[](int n){return n>0;});
}