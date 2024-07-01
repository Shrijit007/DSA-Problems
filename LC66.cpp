#include<vector>
#include<string>
#include<iostream>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for (int i = n-1; i >= 0; i--){
          digits[i]++;
          if(digits[i]==10){
            digits[i]=0;
            if(i!=0)
              digits[i-1]++;
            else
              digits.push_back(0);
              digits[i]=1;
           }
        return digits;
        }
    }
int main(){
    vector<int> v = {9};
    vector<int> result = plusOne(v);
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
