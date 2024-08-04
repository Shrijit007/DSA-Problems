#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<[](int x, int y){return x-y;}(2,4);
    auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,3);
}