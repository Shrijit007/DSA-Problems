#include <iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
}

int add(int num1,int num2){
    print(num1);
    cout<<"+"<<endl;
    print(num2);
    int sum= num1+num2;
    return sum;
}

int main(){
    cout<<"="<<endl<<add(2,4);
}
 