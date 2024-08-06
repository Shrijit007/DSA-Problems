#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void Adisplay(){
        cout<<"inheritance of A"<<endl;
    }
};
class B{
    public:
    void Bdisplay(){
        cout<<"inhertance of  B"<<endl;
    }
};
//C inheriting from A &
class C : public A, public B{
};

int main(){
    C c1;
    c1.Adisplay();
    c1.Bdisplay();
}