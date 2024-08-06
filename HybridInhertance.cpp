#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void Adisplay(){
        cout<<"inheritance of A"<<endl;
    }
};
//class B inheriting class A
class B : public A{
    public:
    void Bdisplay(){
        cout<<"inhertance of  B"<<endl;
    }
};
//class C
class C{
    public:
    void Cdisplay(){
        cout<<"inheritanc from C"<<endl;
    }
};
//class D inheriting from B & C
class D :  public B, public C{
};

int main(){
    D d;
    d.Adisplay();//D obj accessing A method
    d.Bdisplay();//D obj accessing B method
    d.Cdisplay();//D obj accessing C method
}