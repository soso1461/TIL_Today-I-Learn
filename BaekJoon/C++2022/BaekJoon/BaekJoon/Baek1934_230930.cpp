#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int A = 0, B = 0;
		int A_div = 0, B_div = 0;
		int max_div = 0, min_mul = 0;;
		cin >> A >> B;
		for (int div = 1; div <= A; div++) {
			if (A % div == 0 && B % div == 0) {
				max_div = div;
			}
		}
	A_div = A / max_div;
	B_div = B / max_div;
	min_mul = A_div * B_div * max_div;
	cout << min_mul << '\n';
	}
}