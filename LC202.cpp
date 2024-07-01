#include <iostream>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        
        int sum;
        while(n!=1){
            sum=0;
            while(n!=0){
                int digit = n%10;
                sum+=digit*digit;
                n/=10;
            }
            n=sum;
        }
        return n==1;
    }
};
int main(){
    int n=19;
    Solution c = Solution();
    cout<<(c.isHappy(n)?"true":"false");
    return 0;
}