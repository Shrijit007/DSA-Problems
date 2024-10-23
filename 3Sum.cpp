#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector <vector <int> > threeSum(vector<int>& nums) {
        vector<vector<int> > ans;
        if(nums.size()<3) return ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    Solution sl;
    vector<vector<int> > ans = sl.threeSum(arr);
    for(auto v: ans){
        for(auto i: v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
} 