#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int lastNonZeroFoundAt = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            swap(nums[lastNonZeroFoundAt++], nums[i]);
        }
    }
}

int main(){
    vector<int>nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(auto n : nums){
        cout<<n<<" ";
    }
}