#include <iostream>
#include <string>

using namespace std;

// 스택 구조체 정의
struct Stack {
    char data[50];
    int top;

    Stack() {
        top = -1;
    }

    void push(char c) {
        data[++top] = c;
    }

    char pop() {
        if (top == -1) {
            return '\0'; // 스택이 비어있으면 널 문자 반환
        }
        return data[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

// 괄호 문자열이 올바른지 확인하는 함수
bool isVPS(const string& s) {
    Stack st;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.isEmpty()) {
                return false;
            }
            st.pop();
        }
    }

    return st.isEmpty();
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (isVPS(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}