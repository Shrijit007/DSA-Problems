#include <bits/stdc++.h>
using namespace std;

class Main{
    public:
    void display(){
        cout<<"No args"<<endl;
    }
    void display(int n){
        cout<<"one args"<<endl;
    }
    void display(int n,int b){
        cout<<"two args"<<endl;
    }
};

int main(){
    Main m;
    m.display();
    m.display(1);
    m.display(2,1);
}