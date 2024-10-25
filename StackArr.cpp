#include <bits/stdc++.h>
using namespace std;

class StackArr{
    private:
        int top = -1,arr[4];
    public:
        void push(int x){
            if(top==3){
                cout << "Stack Overflow" << endl;
                return;
            }
            arr[++top] = x;
        }
        void pop(){
            if(top==-1){
                cout << "Stack Underflow" << endl;
                return;
            }
            top--;
        }
        int peek(){
            if(top==-1){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return arr[top];
        }
        bool isEmpty(){
            return top==-1;
        }
};

int main(){
    StackArr s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    s.pop();
    cout << s.isEmpty() << endl;
    return 0;
}