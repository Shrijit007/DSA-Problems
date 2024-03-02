#include <iostream>
using namespace std;

int divisible(int n, int a, int b){                     //  n=number range   a=divisor of n   b=divisor of n
    int c1=n/a;                                         //  c1=numbers divisible by a
    int c2=n/b;                                         //  c2=numbers divisible by b
    int c3=n/(a*b);                                     //  c3=numbers divisible by a&b both
    return c1+c2-c3;
}

int main(){                                             //driver func
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b)<<endl;
}