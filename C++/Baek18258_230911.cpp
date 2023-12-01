#include <iostream>
#include <string>
using namespace std;

const int QUEUE_SIZE = 2000000;

struct Queue {
    int arr[QUEUE_SIZE];
    int front, rear;

    void init() {
        front = 0;
        rear = -1;
    }
    void push(int data) {
        if (rear < QUEUE_SIZE - 1) {
        arr[++rear] = data;
        }
    }
    bool empty() {
        return (front > rear);
    }
    int pop() {
        if (empty()) {
            return -1;
        }
        return arr[front++];
    }
    int size() {
        return rear - front + 1;
    }
    int getFront() {
        if (empty()) {
            return -1;
        }
        return arr[front];
    }
    int getBack() {
        if (empty()) {
            return -1;
        }
        return arr[rear];
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int number;
    cin >> number;
    Queue q;
    q.init();
    for (; number--;) {
        string str;
        int num;
        cin >> str;
        if (str == "push") {
            cin >> num;
            q.push(num);
        }
        else if (str == "pop") {
            cout << q.pop() << "\n";
        }
        else if (str == "size") {
            cout << q.size() << "\n";
        }
        else if (str == "empty") {
            cout << q.empty() << "\n";
        }
        else if (str == "front") {
            cout << q.getFront() << "\n";
        }
        else if (str == "back") {
            cout << q.getBack() << "\n";
        }
    }
}
