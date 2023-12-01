#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b, c;
	cin >> n;

	if (n == 2) {
		cin >> a >> b;
		for (int i = 1; i <= a; i++) {
			if (a % i == 0 && b % i == 0) {
				cout << i << '\n';
			}
		}
	}
	else {
		cin >> a >> b >> c;
		for (int i = 1; i <= a; i++) {
			if (a % i == 0 && b % i == 0 && c % i == 0) {
				cout << i << '\n';
			}
		}
	}
	return 0;
}