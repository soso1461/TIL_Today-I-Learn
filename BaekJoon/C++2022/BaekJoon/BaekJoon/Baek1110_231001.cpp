#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;
	if (num == 0) {
		cout << 1;
	}
	int num2 = num;
	int cnt = 0;
	while (num > 0) {
		int tmp = 0;
		int tmp2 = 0;
		int sum = 0;
		tmp = num % 10;
		tmp2 = num / 10;
		sum = tmp + tmp2;
		if (sum >= 10) {
			sum = sum % 10;
		}
		num = tmp * 10 + sum;
		cnt++;
		if (num == num2) {
			cout << cnt;
			break;
		}
	}
}