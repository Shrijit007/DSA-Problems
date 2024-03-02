#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int prevNum = factorial(n-1);
    return n*prevNum;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}