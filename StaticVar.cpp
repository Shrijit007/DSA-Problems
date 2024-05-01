#include  <iostream>
using namespace std;

class A{
    public:
    int a = 9;
    int b = 10;
    static string s;
    void showSum(){
        cout<<a+b;
    }
    void showStatic(){
        cout<<s;
    }
};

    string A::s = "Hello";
int main(){
    A obj = A();
    obj.showSum();
    cout<<A::s;
    obj.showStatic();
    return 0;
}
