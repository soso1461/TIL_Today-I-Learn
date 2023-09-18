#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	queue<int>q;
	for (int i = 1; i <= n; i++)q.push(i);

	cout << "<";

	//문제 해결
	while (q.size() > 1) {
		for (int i = 1; i < k; i++) {
			int tmp = q.front();
			q.pop(); //앞에서 빼서
			q.push(tmp); //뒤에 다시 넣는다
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">\n";
}