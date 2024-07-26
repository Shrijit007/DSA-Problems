#include <bits/stdc++.h>
using namespace std;

int missing (vector<int> &nums) {
    set<int>s(nums.begin(),nums.end());
    for(int i = 0;i<=nums.size();i++){
        if(s.find(i)==s.end()){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>nums ={0,1};
    cout<<missing(nums);
}