#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int slidingWindow(int nums[], int n, int k) {
        int windowSum = 0, start = 0;
        int maxVal = INT_MIN;
        for(int end = 0; end < n; end++) {
            windowSum += nums[end];
            if(end - start + 1 == k) {
                // calculate avg
                maxVal = max(maxVal, windowSum / k);
                windowSum -= nums[start];
                start++;
            }
        }
        return maxVal;
    }
};

int main() {
    Solution s;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout << s.slidingWindow(arr, sizeof(arr) / sizeof(arr[0]), 3);
}
