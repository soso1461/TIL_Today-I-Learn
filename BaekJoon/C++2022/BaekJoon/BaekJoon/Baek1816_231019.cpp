#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		long long S;
		cin >> S;
		for (int div = 2; div <= 1000000; div++) {
			if (S % div == 0) {
				cout << "NO" << '\n';
				break;
			}
			if (div == 1000000)
				cout << "YES" << '\n';
		}
	}
	return 0;
}