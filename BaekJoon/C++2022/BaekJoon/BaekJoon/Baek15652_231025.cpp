#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr;
int N, M;

void recur(int number, int start) {
	if (number == M) {
		for (int num : arr) {
			cout << num << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = start; i <= N; i++) {
		arr.push_back(i);
		recur(number + 1, i);
		arr.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	recur(0, 1);
}