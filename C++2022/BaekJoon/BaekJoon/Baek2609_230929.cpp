#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B;
	cin >> A >> B;

	int max_div = 0;
	int min_mul = 0;
	int A_div = 0, B_div = 0;
	
	for (int i = 1; i <= B; i++) {
		if (A % i == 0 && B % i == 0) {
			max_div = i;
		}
	}
	cout << max_div << '\n';

	A_div = A / max_div;
	B_div = B / max_div;
	min_mul = A_div * B_div * max_div;
	cout << min_mul;
}