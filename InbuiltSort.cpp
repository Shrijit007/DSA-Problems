#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int m;
        cin>>m;
        arr[i]=m;
    }
    sort(arr[0],arr[n]);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}