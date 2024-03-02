#include <iostream>
using namespace std;

int SumFunc(int n){                                     //funcn decln
    if(n==0){
        return 0;                                       //break condn
    }
    int PrevSum = SumFunc(n-1);                         //function self call
    return n + PrevSum;
}

int main(){                                             //driver funcn
    int n;
    cin>>n;
    cout<<SumFunc(n);
}