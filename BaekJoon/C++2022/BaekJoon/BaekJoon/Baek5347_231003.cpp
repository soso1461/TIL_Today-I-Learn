#include <iostream>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		long long result = static_cast<long long>(a) * b / (gcd(a, b));
		cout << result << '\n';
	}
	
	return 0;
}