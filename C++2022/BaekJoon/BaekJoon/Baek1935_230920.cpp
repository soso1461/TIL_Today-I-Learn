#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;

	string str;
	cin >> str;
	double arr[26] = { 0 };

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	stack<double>q;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			q.push(arr[str[i] - 'A']);
		}
		else if (!q.empty()) {
			double tmp = q.top();
			q.pop();
			if (str[i] == '+') {
				tmp = q.top() + tmp;
			}else if (str[i] == '-') {
				tmp = q.top() - tmp;
			}else if (str[i] == '*') {
				tmp = q.top() * tmp;
			}else if (str[i] == '/') {
				tmp = q.top() / tmp;
			}
			q.pop();
			q.push(tmp);
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << q.top() << '\n';

	return 0;
}