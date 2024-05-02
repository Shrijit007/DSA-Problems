#include <iostream>
using namespace std;

void TowerOfHanoi(int n,char from,char to,char aux){
    if(n==1){
        cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
        return;
    } 
    TowerOfHanoi(n-1,from,aux,to);
    cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
    TowerOfHanoi(n-1,aux,to,from);
}

int main(){
    int n=4;
    TowerOfHanoi(n,'A','B','C');
}