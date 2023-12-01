#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int min, max;

	cin >> min;
	cin >> max;

	int cnt = 0;
	int sum = 0, tmp = -1;	// tmp�� ó������ -1�� �־ �Ҽ��� ���� �� -1�� ����ϰ� ����

	for (int i = min; i <= max; i++) {
		for (int div = 1; div <= i; div++) {
			if (i % div == 0) { cnt++; }
		}
		if (cnt == 2) {
			if (tmp == -1) tmp = i;
			sum += i;
		}
		cnt = 0;
	}
	if (tmp == -1)
		cout << -1 << '\n';
	else
		cout << sum << '\n' << tmp << '\n';
}