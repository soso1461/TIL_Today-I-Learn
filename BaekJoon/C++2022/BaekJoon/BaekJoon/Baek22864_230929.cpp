#include <iostream>

using namespace std;

int main() {

	int A, B, C, M;
	int work = 0, tired = 0;
	cin >> A >> B >> C >> M;

	for (int i = 0; i < 24; i++) {
		if (tired + A <= M) {
			tired += A;
			work++;
		}
		else {
			tired -= C;
			if (tired < 0) tired = 0;
		}
	}
	cout << work * B;
	return 0;
}