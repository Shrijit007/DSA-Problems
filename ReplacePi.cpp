#include <iostream>
using namespace std;

void replace(string s){
    if(s.length()==0){                                           //base condn
        return;
    }
    if(s[0]=='p' && s[1]=='i'){                                  //'pi' search
        cout<<"3.14";                                            //3.14 replace
        replace(s.substr(2));                                    //if pi found then recursion call for ros 
    }
    else{
        cout<<s[0];           
        replace(s.substr(1));                                    //if not found then recursion call after last string
    }
}

int main(){                                                      //driver code
    replace("pipppppiiipipiiip");
    return 0;
}