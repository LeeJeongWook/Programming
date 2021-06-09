#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, a, b, c;
	char operate, tmp;
	string ans;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> a >> operate >> b >> tmp >> c;

		if (operate == '+') {
			(a + b) == c ? ans = "YES" : ans = "NO";
		}
		else if (operate == '-') {
			(a - b) == c ? ans = "YES" : ans = "NO";
		}
		cout << "Case " << test + 1 << ": " << ans << '\n';
	}

	return 0;
}