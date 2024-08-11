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
//class C inheriting class B
class C : public B{
};

int main(){
    B b1;
    //object of B using A method
    b1.Adisplay();
    C c1;
    //object of C using B method
    c1.Bdisplay();
    //object of C using A method
    c1.Adisplay();
}