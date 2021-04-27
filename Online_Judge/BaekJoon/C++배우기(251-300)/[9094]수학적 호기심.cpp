#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, n, m, cnt;
	double ans;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> n >> m;
		cnt = 0;
		for (int a = 1; a < n + 2; a++) {
			for (int b = a + 1; b < n; b++) {
				ans = ((a * a) + (b * b) + m) % (a * b);
				if (ans == 0)
					cnt++;
			}
		}
		cout << cnt << '\n';
	}
	
	return 0;
}