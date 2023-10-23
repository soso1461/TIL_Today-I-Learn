#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

ll gcd(ll x, ll y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

ll lcm(ll x, ll y) {
	return (x * y) / gcd(x, y);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 1. ���� �ٿ��� �ȴ�

	// 8 12
	// 4 8

	// 2. �ִ� �������� ���� �� �� �� �ϳ��� ����� �������� ������ �ʴ� ��
	// 8 4
	// �ִ� �����

	// 3. �� ���� ������ ��ŭ ���� ���δ�.
	// �ϳ��� ���� �������� �Ǵ� ��ŭ ���ٴ� ����
	// ������ ���� �������� ���Ѵ�

	ll a, b;
	cin >> a >> b;

	ll max = gcd(a, b) * lcm(a, b);

	vector<pair<ll, ll>>answer;

	for (long long i = gcd(a, b); i < (ll)sqrt(max) + 1; i += gcd(a, b)) {
		ll j = max / i;
		if (gcd(i, j) == gcd(a, b)) {
			if (lcm(i, j) == lcm(a, b)) {
				answer.push_back(make_pair(i, j));
			}
		}
	}

	pair<long, long> last_pair = answer.back();
	cout << last_pair.first << " " << last_pair.second << '\n';

}