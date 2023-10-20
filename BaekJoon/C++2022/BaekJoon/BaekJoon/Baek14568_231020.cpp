#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int count = 0;

	for (int A = 0; A < N; A++) {
		for (int B = 0; B < N; B++) {
			for (int C = 0; C < N; C++) {
				if (A + B + C == N) {
					if (A >= B + 2) {
						if (A != 0 && B != 0 && C != 0) {
							if (C % 2 == 0) {
								count += 1;
							}
						}
					}
				}
			}
		}
	}
	cout << count << '\n';

	return 0;
}