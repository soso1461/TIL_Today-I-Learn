#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	int ans = 0, cnt = 0;
	int arr[1001] = {0};

	for (int i = 2; i <= N; i++) {
		for (int j = i; j <= N; j += i) {
			if (arr[j] == 0) { cnt++; arr[j] = 1; }
			if (cnt == K) { ans = j; break; }
		}
		if (cnt == K) break;
	}
	cout << ans << '\n';
	return 0;
}