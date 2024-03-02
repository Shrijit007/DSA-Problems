#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int i,int key){
    if(i==n){                                           //base condn for false
        return -1;
    }
    if(arr[i]==key){                                    //if found return posn(i)
        return i;
    }
    return firstOcc(arr,n,i+1,key);                     //if not found call recursion
}

int lastOcc(int arr[],int n,int i,int key){
    if(i==n){                                           //base condn for false
        return -1;
    }
    int restArr=lastOcc(arr,n,i+1,key);                 //setting pointer to last
    if(restArr!=-1){   
        return restArr;                                 //recursion for posn to set at last
    }
    if(arr[i]==key){                                    //if found return posn(i)
        return i;
    }
    return -1;                                          //if not exist return false(-1)
}

int main(){                                             //driver code
    int arr[]={1,4,2,3,6,2,3,6,2,8};
    cout<<firstOcc(arr,10,0,2)<<endl;
    cout<<lastOcc(arr,10,0,2)<<endl;
}