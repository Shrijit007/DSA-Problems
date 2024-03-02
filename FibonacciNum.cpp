#include <iostream>
using namespace std;

int FebNum(int n){
    if(n==0 || n==1){
        return n;
    }
    return FebNum(n-1) + FebNum(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<FebNum(n);
}