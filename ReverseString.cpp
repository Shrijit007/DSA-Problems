#include <iostream>
using namespace std;

void reverse(string a){                                         //function input
    if(a.length() == 0){                                        //base case
        return;
    }
    string ros = a.substr(1);                                   //restofstr split using substr
    reverse(ros);                                               //recusrsion call
    cout<<a[0];
}

int main(){                                                     //driver code
    reverse("shrijit");
}