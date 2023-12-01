#include <iostream>

using namespace std;

const int MX = 1000005;
int arr[2 * MX + 1];		// deque는 배열을 중간부터 시작해야 양쪽으로 확장이 가능하여 2를 곱함
int head = MX, tail = MX;

void push_front(int x) {
	arr[--head] = x;
}

void push_back(int x) {
	arr[tail++] = x;
}

void pop_front() {
	head++;
}

void pop_back() {
	tail--;
}

int front() {
	return arr[head];
}

int back() {
	return arr[tail - 1];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		string q;
		cin >> q;
		if (q == "push_back") {
			int val;
			cin >> val;
			push_back(val);
		}
		else if (q == "push_front") {
			int val;
			cin >> val;
			push_front(val);
		}
		else if (q == "pop_front") {
			if (tail == head) cout << -1 << '\n';
			else {
				cout << front() << '\n';
				pop_front();
			}
		}
		else if (q == "pop_back") {
			if (tail == head) cout << -1 << '\n';
			else {
				cout << back() << '\n';
				pop_back();
			}
		}
		else if (q == "size")
			cout << tail - head << '\n';
		else if (q == "empty")
			cout << (tail == head) << '\n';
		else if (q == "front") {
			if (tail == head) cout << -1 << '\n';
			else cout << front() << '\n';
		}
		else {	// back
			if (tail == head) cout << -1 << '\n';
			else cout << back() << '\n';
		}
	}
	//return 0;
}