#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// strike ball 카운트를 계산할 때
// 어렵게 생각하지 않고

// A라는 친구가 생각할 수 있는 정답의 범위를 모조리 때려 박아서
// 조건에 모두 맞다면 정답 카운트를 올리겠다

// 100 ~ 999

int N, result = 0;
vector<vector<int>> hint;

bool check(int index, int number) {
	int _number = hint[index][0];
	int _strike = hint[index][1];
	int _ball = hint[index][2];

	int strike = 0;
	int ball = 0;

	int _A = _number / 100;
	int _B = (_number - (_A * 100)) / 10;
	int _C = _number % 10;

	int A = number / 100;
	int B = (number - (A * 100)) / 10;
	int C = number % 10;

	if (A == 0 || B == 0 || C == 0) return false;
	if (A == B || A == C || B == C) return false;

	if (A == _A) strike += 1;
	if (B == _B) strike += 1;
	if (C == _C) strike += 1;

	if (A == _B || A == _C) ball += 1;
	if (B == _A || B == _C) ball += 1;
	if (C == _A || C == _B) ball += 1;

	if (strike == _strike && ball == _ball) return true;

	return false;

}

void recur(int hintIndex, int number) {

	if (hintIndex == N) {
		result += 1;
		recur(0, number + 1);
		return;
	}

	if (number == 1000) return;

	// 만약 힌트에 통과했다면, 스트라이크 카운트랑 볼 카운트가 동일하다면
	if (check(hintIndex,number)) {
		recur(hintIndex + 1, number);
	}
	// 만약 힌트에 통과하지 않았다면
	else {
		recur(0, number + 1);
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	hint.resize(N, vector<int>(3));

	for (int i = 0; i < N; i++) {
		cin >> hint[i][0] >> hint[i][1] >> hint[i][2];
	}

	recur(0, 100);
	cout << result << '\n';

	return 0;
}