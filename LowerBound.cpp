#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,3,5,4,7};
    sort(arr,arr+5);
    int *ptr = lower_bound(arr,arr+5,3);
    cout<<(*ptr)<<endl;
    int *pt = lower_bound(arr,arr+5,6);
    cout<<(*pt);
}