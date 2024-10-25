#include <bits/stdc++.h>
using namespace std;

class StackViaQueue{
    private:
    queue<int> q;
    public:
    void push(int x){
        int s = q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        q.pop();
    }
    int top(){
        return q.front();
    }
    int size(){
        return q.size();
    }
};

int main(){
    StackViaQueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    s.pop();
    s.pop();
    cout << s.size() << endl;
    return 0;
}