#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(1);
    q.push(8);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}