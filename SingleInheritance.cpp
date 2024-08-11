#include <bits/stdc++.h>
using namespace std;

class a{
    public:
    int roll;
    string name;
    void display(){
        cout<<name<<" "<<roll<<endl;
    }
};
//inherited class a into class b
class  b : public a{
};

int main(){
    b b1;
    //can access function defined in a with object of b
    b1.display();
}