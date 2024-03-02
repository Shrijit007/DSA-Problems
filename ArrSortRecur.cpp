#include <iostream>
using namespace std;

bool sorted(int arr[],  int n){
    if(n==1){                                           //true if arr has only 1 element
        return true;
    }
    bool restArr = sorted(arr+1,n-1);                   //comparing first two elements and repeating
    return (arr[0]<arr[1] && restArr);                  //condition for sorting
}

int main(){                                             //driver code
    int arr[]= {1,2,3,4,5,6};
    cout<<sorted(arr,6)<<endl;
}