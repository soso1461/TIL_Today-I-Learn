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

	// 1. 갭을 줄여도 된다

	// 8 12
	// 4 8

	// 2. 최대 공약수라는 말은 두 수 중 하나로 나누어서 나머지가 생기지 않는 것
	// 8 4
	// 최대 공약수

	// 3. 한 수를 가능한 만큼 갭을 줄인다.
	// 하나의 수를 작은수로 되는 만큼 뺀다는 말은
	// 나누고 나서 나머지를 뜻한다

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