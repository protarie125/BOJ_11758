#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll x1, y1;
	ll x2, y2;
	ll x3, y3;

	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	const auto px = x1 - x2;
	const auto py = y1 - y2;
	const auto qx = x3 - x2;
	const auto qy = y3 - y2;

	const auto k = px * qy - qx * py;
	if (0 == k) {
		cout << 0;
	}
	else if (k < 0) {
		cout << 1;
	}
	else {
		cout << -1;
	}

	return 0;
}