#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec = {2,5,1,4,7};
    sort(vec.begin(),vec.end());
    auto it = upper_bound(vec.begin(),vec.end(),2);
    cout<<(*it);
}