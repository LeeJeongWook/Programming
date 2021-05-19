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
		long long a = abs(n + m - 1);
		//ans = (n + m)* ((n + m) - 1) / 2;
		if ((n + m) < 0) {
			cout << " 111 " << endl;
			ans = (n + m) * ((a / 2) + (a % 2));
			/*
			for (int i = n; i < n + cnt; i++) {
				ans += i;
			}
			*/
		}
		else if ((n < 0) && (0 <= (n + m))) {
			cout << " 222 " << endl;
			//ans = (n + m) * (((n + m) / 2) + ((n + m) % 2));
			ans = (n + m) * ((a / 2) + (a % 2));
			/*
			int i = -n;
			while (cnt > 0) {
				i++;
				ans += i;
				cnt--;
			}
			*/
		}
		else {
			ans = (n + m) * ((a / 2) + (a % 2));
		}
		cout << "Scenario #" << testcase << ":\n" << ans << "\n\n";
	}

	return 0;
}