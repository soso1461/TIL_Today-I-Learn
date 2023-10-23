#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	// 1. 완전 탐색

	// 2. 누적합

	int N;
	cin >> N;

	vector<int> graph(10001, 0);

	vector<int> x_list;
	vector<int> y_list;
	for (int i = 0; i < N; i++) {
		int X, Y;
		cin >> X >> Y;
		graph[X] = Y;
		x_list.push_back(X);
		y_list.push_back(Y);
	}
	
	int maxHeight = *max_element(y_list.begin(), y_list.end());
	int maxWidth = *max_element(x_list.begin(), x_list.end());

	vector<int> prefix(maxWidth + 2, 0);
	vector<int> suffix(maxWidth + 2, 0);

	vector<int> maxPoint;

	// prefix 계산
	int h = 0;

	for (int i = 1; i < maxWidth + 3; i++) {
		if (graph[i] == maxHeight) {
			maxPoint.push_back(i);
			break;
		}
		h = max(h, graph[i]);
		prefix[i] = prefix[i - 1] + h;
	}

	h = 0;
	for (int j = maxWidth; j > 0; j--) {
		if (graph[j] == maxHeight) {
			maxPoint.push_back(j);
			break;
		}
		h = max(h, graph[j]);
		suffix[j] = suffix[j + 1] + h;
	}

	int result = *max_element(prefix.begin(), prefix.end()) + *max_element(suffix.begin(), suffix.end());
	result += (maxPoint[1] - maxPoint[0] + 1) * maxHeight;

	cout << result << '\n';

	// 3. 투포인터
}