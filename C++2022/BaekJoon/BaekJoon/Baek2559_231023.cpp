#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int A, B;
	cin >> A >> B;

	vector<int> arr(A);
	for (int i = 0; i < A; i++) {
		cin >> arr[i];
	}

	vector<int> prefix(A + 2 , 0);
	for (int i = 0; i < A; i++) {
		prefix[i + 1] = prefix[i] + arr[i];
	}

	vector<int> result;
	for (int j = B; j < A + 1; j++) {
		result.push_back(prefix[j] - prefix[j - B]);
	}

	int maxValue = *max_element(result.begin(), result.end());
	cout << maxValue << '\n';

	return 0;
}