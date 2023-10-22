#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long A, B;
	cin >> A >> B;

	A -= 1;

	long long	tmp_A = A;
	for (int i = 1; i < 50; i++) {
		tmp_A += (A / (long long)pow(2, i)) * ((long long)pow(2, i) - (long long)pow(2, i - 1));
	}

	long long tmp_B = B;
	for (int i = 1; i < 50; i++) {
		tmp_B += (B / (long long)pow(2, i)) * ((long long)pow(2, i) - (long long)pow(2, i - 1));
	}

	cout << tmp_B - tmp_A << '\n';
}