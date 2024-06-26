#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int N, x, y, ans = 2e9;

struct flavor
{
    int x, y;
};

flavor arr[11];
bool used[11];

void findAns(int cnt, int idx, int mul, int sum) {
    if (cnt >= 1) {
        int result = abs(mul - sum);
        ans = ans > result ? result : ans;
    }

    for (int i = idx; i <= N; i++) {
        if (used[i] == false) {
            used[i] = true;
            findAns(cnt + 1, i, mul * arr[i].x, sum + arr[i].y);
            used[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> x >> y;
        arr[i].x = x;
        arr[i].y = y;
    }
    findAns(0, 1, 1, 0);
    cout << ans << '\n';

    return 0;
}