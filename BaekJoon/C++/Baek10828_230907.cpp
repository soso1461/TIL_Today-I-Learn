#include <iostream>
#include <string>

using namespace std;

struct stack {
    int arr[10000];
    int last;

    void init() {
        last = -1;
    }
    void push(int data) {
        arr[++last] = data;
    }
    bool empty() {
        return (last < 0);
    }
    int pop() {
        if (empty()) {
            return -1;
        }
        return arr[last--];
    }
    int size() {
        return last + 1;
    }
    int top() {
        if (empty()) {
            return -1;
        }
        return arr[last];
    }
};

int main()
{
    int number;
    cin >> number;
    stack s;
    s.init();
    for (; number--;) {
        string str;
        int num;
        cin >> str;
        if (str == "push") {
            cin >> num;
            s.push(num);
        }
        if (str == "pop") {
            cout << s.pop() << "\n";
        }
        if (str == "size") {
            cout << s.size() << "\n";
        }
        if (str == "empty") {
			cout << s.empty() << "\n";
		}
		if (str == "top") {
			cout << s.top() << "\n";
		}
    }
}
