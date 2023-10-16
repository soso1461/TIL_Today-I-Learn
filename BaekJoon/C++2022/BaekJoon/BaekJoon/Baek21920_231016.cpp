#include <iostream>

using namespace std;

int n, x;
int arr[500010];

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;

    double cnt = 0;
    double total = 0;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (gcd(x, num) == 1)
        {
            cnt++;
            total += arr[i];
        }
    }
    cout.precision(7);
    cout << total / cnt;

    return 0;
}