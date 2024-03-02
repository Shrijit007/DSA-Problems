#include <iostream>
using namespace std;

int main() {
    double sales = 95000; 
    double state_tax = sales * 0.04;
    double county_tax = sales * 0.02;
    double total_tax = state_tax + county_tax;
    cout << "state tax = " << state_tax << endl;
    cout << "county tax = " << county_tax << endl;
    cout << "total tax = " << total_tax << endl;
    return 0;
}