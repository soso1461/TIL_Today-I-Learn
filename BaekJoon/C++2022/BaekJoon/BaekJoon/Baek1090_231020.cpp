#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// 모든 위치에서

	// 모든 친구들의 거리를 계산해서

	// 가장 적은 값을 표시하면 된다.

	/* 
	* 1번 아이디어
	* X, Y를 구분해서 계산해준 뒤에 합쳐서
	* 최소값을 알려주면 된다.
	*/

	/*
	* 2번 아이디어
	* 우리가 한 곳에서 모일 때, 비용을 최소화 하기 위해서는
	* 우리의 집 중 한 곳에서 모이면 된다.
	*/

	/* 
	* 3번 아이디어
	* 최소 거리를 계산하고 싶다.
	* 그리고, 2명이 모여야한다.
	* 그 점에서, 가까운 두명의 거리만 더해주면 되지 않을까?
	*/

    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    vector<int> arr_y;
    vector<int> arr_x;
    vector<int> answer(n, -1);

    // 입력
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        arr.push_back(make_pair(a, b));
        arr_y.push_back(b);
        arr_x.push_back(a);
    }

    // 만날 장소 정하기
    for (int y : arr_y) {
        for (int x : arr_x) {
            vector<int> dist;

            // 만날 장소로 각각의 점들이 오는 비용 계산
            for (const auto& point : arr) {
                int ex = point.first;
                int ey = point.second;
                int d = abs(ex - x) + abs(ey - y);
                dist.push_back(d);
            }

            // 가까운 순서대로 정렬
            sort(dist.begin(), dist.end());

            int tmp = 0;
            for (int i = 0; i < dist.size(); ++i) {
                int d = dist[i];
                tmp += d;
                if (answer[i] == -1) {
                    answer[i] = tmp;
                }
                else {
                    answer[i] = min(tmp, answer[i]);
                }
            }
        }
    }

    // 출력
    for (int ans : answer) {
        cout << ans << " ";
    }
    cout << '\n';

    return 0;

}