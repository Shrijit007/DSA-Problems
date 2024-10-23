#include <vector>
#include <iostream>
using namespace std;

class Solution {
private:
    int binarySearch(vector<int>nums,int target,int begin,int end){
        int left=begin,right=end;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) left = mid+1;
            else right = mid-1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int k=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                k=i;
                break;
            } 
        }
        if(k == -1) binarySearch(nums,target,0,nums.size()-1);
        else if(nums[0]>target)
            return binarySearch(nums,target,k+1,nums.size()-1);
        return binarySearch(nums,target,0,k);
    }
};

int main() {
    vector<int> arr = {1,3};
    Solution sl;
    cout << sl.search(arr, 0) << endl;
    return 0;
}