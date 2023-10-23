#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	// ���̳��� ���α׷��� (�޸������̼�)
	// �ٵ� ���������� ������ ����

	int num;
	cin >> num;

	vector <int> arr(num);
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	vector <int> prefix(num + 1);
	int maxValue = arr[0];

	for (int i = 0; i < num; i++) {
		prefix[i + 1] = max(prefix[i] + arr[i], arr[i]);
		maxValue = max(maxValue, prefix[i + 1]);
	}

	cout << maxValue << '\n';

	return 0;

}