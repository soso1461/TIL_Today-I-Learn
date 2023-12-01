#include <iostream>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

int lcm(int x, int y) {
	return x * y / gcd(x, y);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 두 수를 비교해서 최대공약수가 1이라면 OK

	// 두 수를 비교해서 최대공약수가 1이 아니라면 NOk

	// 숫자를 하나 추가하거나
	// 또는 두 개 추가한다.

}