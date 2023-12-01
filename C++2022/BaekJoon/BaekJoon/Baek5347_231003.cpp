#include <iostream>

typedef long long int ll;

using namespace std;

ll gcd(ll x, ll y) {
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
		ll a, b;
		cin >> a >> b;
		ll result = a * b / (gcd(a, b));
		cout << result << '\n';
	}
	
	return 0;
}