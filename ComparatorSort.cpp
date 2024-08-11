#include <bits/stdc++.h>
using namespace std;

//comparator operator
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }
    else{
        if(a.second<b.second) return false;
        return true;
    }
}

int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> vec(n);
    for(int i = 0; i < n; i++){
        cin>>vec[i].first>>vec[i].second;
    }

    sort(vec.begin(),vec.end(),cmp);

    for(auto n : vec){
        cout<<n.first<<" "<<n.second<<endl;
    }
    return 0;
}