#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr;
int N, M;
vector<int> numbers;

void recur(int number) {
	if (number == M) {
		for (int num : arr) {
			cout << num << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < N; i++) {
		arr.push_back(numbers[i]);
		recur(number + 1);
		arr.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	numbers.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	recur(0);

	return 0;
}