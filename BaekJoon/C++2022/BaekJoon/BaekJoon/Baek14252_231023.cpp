#include <iostream>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

int lcm(int x, int y) {
	return x * y / gcd(x, y);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// �� ���� ���ؼ� �ִ������� 1�̶�� OK

	// �� ���� ���ؼ� �ִ������� 1�� �ƴ϶�� NOk

	// ���ڸ� �ϳ� �߰��ϰų�
	// �Ǵ� �� �� �߰��Ѵ�.

}