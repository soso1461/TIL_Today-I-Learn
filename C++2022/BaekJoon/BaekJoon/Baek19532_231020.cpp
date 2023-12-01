#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B, C, D, E, F;

	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	cin >> E;
	cin >> F;

	for (int x = -10000; x < 10001; x++) {
		for (int y = -10000; y < 10001; y++) {
			if (A * x + B * y == C) {
				if (D * x + E * y == F) {
					cout << x << " " << y;
					break;
				}
			}
		}
	}

}