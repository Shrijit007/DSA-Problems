#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] <= target && matrix[i][matrix[0].size() - 1] >= target) {
                return binarySearch(matrix[i], target);
            }
        }
        return false;
    }

private:
    bool binarySearch(vector<int> arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                return true;
            }
            else if (arr[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return false;
    }
};

int main() {
    vector<vector<int>> arr =  {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 5;
    Solution sl;
    bool found = sl.searchMatrix(arr, target);

    if (found) {
        cout << "Target found in matrix." << endl;
    }
    else {
        cout << "Target not found in matrix." << endl;
    }

    return 0;
}
