#include <iostream>
#include <vector>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return 0;
	}
	return gcd(y, x % y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A;
	cin >> A;

	vector<int> num(A);

	int cnt = 0;

	for (int i = 0; i < A; i++) {
		int number;
		cin >> number;
		for (int div = 1; div < A; div++) {
			if (i % div == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			num[i] += i;
		}
		cout << num[i];
	}

	/*for (int i = 0; i < A; i++) {
		for (int j = i + 1; j < A; j++) {
			num[i] += gcd(num[i], num[j]);
		}
	}*/


}