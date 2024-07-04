#include<vector>
#include <iostream>
using namespace std;

void printVec(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    printVec(v);
    v.pop_back();
    printVec(v);
}