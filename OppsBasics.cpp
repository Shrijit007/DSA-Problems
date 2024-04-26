#include <iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    Student(int r,string n){
        roll=r;
        name=n;
    }
    void show(){
        cout<<roll;
        cout<<",";
        cout<<name;
    }
};

int main(){
    Student s1 = Student(1,"hello");
    s1.show();
    return 0;
}
