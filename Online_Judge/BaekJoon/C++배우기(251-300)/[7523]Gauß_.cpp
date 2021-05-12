#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	long long testcase, n, m, ans, cnt;

	cin >> testcase;

	for (int test = 1; test <= testcase; test++) {
		ans = 0;
		cin >> n >> m;
		cnt = abs(n + m);

		if ( (n + m) < 0 ) {
			for (int i = n; i < n + cnt; i++) {
				ans += i;
			}
		}
		else if ((n < 0) && (0 <= (n + m))) {
			int i = -n;
			while (cnt > 0) {
				i++;
				ans += i;
				cnt--;
			}
		}
		else {
			for (int i = n; i < cnt; i++) {
				ans += i;
			}
		}
		cout << "Scenario #" << testcase << ":\n" << ans << "\n\n";
	}

	return 0;
}