#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, a, b, ans;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> a >> b;
		ans = 1;

		for (int i = 0; i < b; i++) {
			ans = (ans * a) % 10;
		}
		if (ans  == 0) {
			cout << 10 << '\n';
		}
		else {
			cout << ans << '\n';
		}
		
	}
	return 0;
}

