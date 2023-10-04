#include <iostream>
#include <vector>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> numbers(n);

        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        long long gcdSum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                gcdSum += gcd(numbers[i], numbers[j]);
            }
        }
        cout << gcdSum << '\n';
    }
    return 0;
}