#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int numbers[1000];
    int strikes[1000];
    int balls[1000];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i] >> strikes[i] >> balls[i];
    }

    int answer = 0;

    for (int a = 1; a < 10; a++) {
        for (int b = 1; b < 10; b++) {
            for (int c = 1; c < 10; c++) {
                int counter = 0;

                if (a == b || b == c || c == a) {
                    continue;
                }

                for (int i = 0; i < n; i++) {
                    int check = numbers[i];
                    int strike = strikes[i];
                    int ball = balls[i];

                    int strike_count = 0;
                    int ball_count = 0;

                    int check1 = check / 100;
                    int check2 = (check / 10) % 10;
                    int check3 = check % 10;

                    // 스트라이크 계산
                    if (a == check1) {
                        strike_count++;
                    }
                    if (b == check2) {
                        strike_count++;
                    }
                    if (c == check3) {
                        strike_count++;
                    }

                    // 볼 계산
                    if (a == check2 || a == check3) {
                        ball_count++;
                    }
                    if (b == check1 || b == check3) {
                        ball_count++;
                    }
                    if (c == check1 || c == check2) {
                        ball_count++;
                    }

                    // 매칭 여부 확인
                    if (strike != strike_count || ball != ball_count) {
                        break;
                    }

                    counter++;
                }

                if (counter == n) {
                    answer++;
                }
            }
        }
    }

    cout << answer << '\n';

    return 0;
}
