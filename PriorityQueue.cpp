#include <bits/stdc++.h>
using namespace std;

template<typename T>void print_queue(T& q){
    while(!q.empty()){
    cout<<q.top()<<" ";
    q.pop();
    }
    cout<<endl;
}

int main(){
    //print in ascending
    priority_queue<int>q;
    for(int n:{1,4,2,3,7,4}) {
        q.push(n);
    }
    print_queue(q);
    
    //print in descending
    priority_queue<int,vector<int>,greater<int>> q1;
    for(int n:{1,4,2,3,7,4}) {
        q1.push(n);
    }
    print_queue(q1);
}
