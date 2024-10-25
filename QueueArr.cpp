#include <bits/stdc++.h>
using namespace std;

class QueueArr{
    private:
        int front = 0,rear = 0,arr[4];
    public:
        void enqueue(int x){
            if(rear==4){
                cout << "Queue Overflow" << endl;
                return;
            }
            arr[rear++] = x;
        }
        void dequeue(){
            if(front==rear){
                cout << "Queue Underflow" << endl;
                return;
            }
            front++;
        }
        int peek(){
            if(front==rear){
                cout << "Queue is empty" << endl;
                return -1;
            }
            return arr[front];
        }
        bool isEmpty(){
            return front==rear;
        }
        int size(){
            return rear-front;
        }
};

int main(){
    QueueArr q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    cout << q.isEmpty() << endl;
    q.dequeue();
    q.dequeue();
    cout << q.isEmpty() << endl;
    return 0;
}