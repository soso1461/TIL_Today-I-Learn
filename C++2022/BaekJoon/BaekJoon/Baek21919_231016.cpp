#include <iostream>
#include <cmath>

using namespace std;

bool is_Prime(long long x) {
	if (x < 2) return false;

	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) return false;
	}
	return true;
}

long long gcd(long long x, long long y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

long long lcm(long long x, long long y) {
	return x * y / gcd(x, y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	long long answer = 1;

	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (is_Prime(input))
			answer = lcm(answer, input);
	}
	if (answer == 1) cout << -1;
	else cout << answer;
	
	return 0;

}