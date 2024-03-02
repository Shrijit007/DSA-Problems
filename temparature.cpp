#include <iostream>
using namespace std;

int main() {
    cout << "enter temp in celcius:";
    double temp;
     cin >> temp;
    double tempf;
    tempf= (temp * 1.8)+32;
    cout << "temp in farenhite :" << tempf;
    return 0;
}