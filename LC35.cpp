#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        while (l < n) {
            int m = l + (n - l) / 2;
            if (nums[m] == target)
                return m;
            if (nums[m] < target)
                l = m + 1;
            else
                n = m;
        }
        return l;
    }
};

int main(){
    Solution s;
    vector<int>nums={1,3,5,7};
    int n = s.searchInsert(nums,-5);
    cout<<n;
}