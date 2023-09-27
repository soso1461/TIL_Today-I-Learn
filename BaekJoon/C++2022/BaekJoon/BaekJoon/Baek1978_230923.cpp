#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int result = 0;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		
		int cnt = 0;

		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			result++;
		}
	}
	
	cout << result;
	return 0;

}