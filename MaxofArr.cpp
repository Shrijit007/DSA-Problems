#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<*max_element(arr , arr+n);
}