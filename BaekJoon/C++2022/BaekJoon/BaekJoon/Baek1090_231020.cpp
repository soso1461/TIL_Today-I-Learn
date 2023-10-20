#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// ��� ��ġ����

	// ��� ģ������ �Ÿ��� ����ؼ�

	// ���� ���� ���� ǥ���ϸ� �ȴ�.

	/* 
	* 1�� ���̵��
	* X, Y�� �����ؼ� ������� �ڿ� ���ļ�
	* �ּҰ��� �˷��ָ� �ȴ�.
	*/

	/*
	* 2�� ���̵��
	* �츮�� �� ������ ���� ��, ����� �ּ�ȭ �ϱ� ���ؼ���
	* �츮�� �� �� �� ������ ���̸� �ȴ�.
	*/

	/* 
	* 3�� ���̵��
	* �ּ� �Ÿ��� ����ϰ� �ʹ�.
	* �׸���, 2���� �𿩾��Ѵ�.
	* �� ������, ����� �θ��� �Ÿ��� �����ָ� ���� ������?
	*/

    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    vector<int> arr_y;
    vector<int> arr_x;
    vector<int> answer(n, -1);

    // �Է�
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        arr.push_back(make_pair(a, b));
        arr_y.push_back(b);
        arr_x.push_back(a);
    }

    // ���� ��� ���ϱ�
    for (int y : arr_y) {
        for (int x : arr_x) {
            vector<int> dist;

            // ���� ��ҷ� ������ ������ ���� ��� ���
            for (const auto& point : arr) {
                int ex = point.first;
                int ey = point.second;
                int d = abs(ex - x) + abs(ey - y);
                dist.push_back(d);
            }

            // ����� ������� ����
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

    // ���
    for (int ans : answer) {
        cout << ans << " ";
    }
    cout << '\n';

    return 0;

}