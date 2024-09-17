#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int>s1(nums1.begin(),nums1.end());
    unordered_set<int>s2(nums2.begin(),nums2.end());
    vector<int>vec;
    for(int n : s2){
        if(s1.find(n) != s1.end()) vec.push_back(n);
    }
    return vec;
}

int main(){
    vector<int> nums1 ={1,2,2,1}, nums2 = {2,2};
    vector<int>v = intersection(nums1,nums2);
    for(auto n:v){
        cout<<n;
    }
}