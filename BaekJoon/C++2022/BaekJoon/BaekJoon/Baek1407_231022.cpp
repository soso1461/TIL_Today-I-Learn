#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B;
	cin >> A >> B;

	A -= 1;

	int	tmp_A = A;
	for (int i = 1; i < 100; i++) {
		tmp_A += (A / pow(2, i)) * (pow(2, i) - pow(2, i - 1));
	}

	int tmp_B = B;
	for (int i = 1; i < 100; i++) {
		tmp_B += (B / pow(2, i)) * (pow(2, i) - pow(2, i - 1));
	}

	cout << (tmp_B - tmp_A);
}