#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll num, n, m, ans;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		bool p = (n < 3) ? 1 : 0;
		ans = (n < 3) ? 2 : n;
		while (!p) {
			m = sqrt(n) + 1;
			for (int j = 2; j <= m; j++) {
				if (n % j == 0) break;
				if (j == m) {
					ans = n;
					p = 1;
				}
			}
			n++;
		}
		cout << ans << '\n';
	}
}