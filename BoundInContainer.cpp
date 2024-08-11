#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>s = {2,1,4,3,6};
    auto it = s.upper_bound(3);     //use  this syntax for O(n) in containers
    cout<<(*it);
}