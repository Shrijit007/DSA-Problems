#include <iostream>
using namespace std;

class ClassRoom{
    public:
    int age;
    string name;
    ClassRoom(){}
    ClassRoom(int age , string name){
        this->age=age;
        this->name=name;
    }
    void show(){
        cout<<name<<" "<<age;
    }
};

int main(){
    ClassRoom objects[3];
    for (int i = 0; i < 3; i++) {
        int age;
        string name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        objects[i] = ClassRoom(age, name);
    }
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << objects[i].name << ", Age: " << objects[i].age << endl;
    }

    return 0;
}
