#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll;
    string name;
    student(){}
    student(int n,string s){
        roll=n;
        name=s;
    }
    void display(){
        cout<<name<<" "<<roll<<endl;
    }
    bool operator == (student &a){
    if(name==a.name && roll==a.roll) return true;
    return false;
    }
};

int main(){
    student s1(21,"shrijit"); 
    student s2;
    cin>>s2.name>>s2.roll;
    if(s1==s2) cout<<"same"<<endl;
    else cout<<"not same"<<endl;
}