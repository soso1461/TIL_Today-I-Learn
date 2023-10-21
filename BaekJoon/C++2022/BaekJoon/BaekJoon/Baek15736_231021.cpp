#include <iostream>
#include <math.h>

using namespace std;

// 계산 잘 해보면 제곱수를 구하는 문제이다.

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;

	int result = sqrt(num);
	cout << result;

}