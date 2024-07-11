#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={2,3,4,5};
    vector<int> :: iterator it;
    for (it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
    }
    cout<<endl;

    vector<pair<int,int>> vp ={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator itt;
    for (itt = vp.begin(); itt!=vp.end(); itt++){
        cout<< (*itt).first<< " "<< (*itt).second<< endl;;
    }
    cout<<endl;

    for(auto &val : v){
        cout<<val<<" ";
    }    
    cout<<endl;

    for(pair<int,int> value : vp){
        cout<< value.first << " " << value.second << endl;
    }
    for(auto value : vp){
        cout<< value.first << " " << value.second << endl;
    }
}

