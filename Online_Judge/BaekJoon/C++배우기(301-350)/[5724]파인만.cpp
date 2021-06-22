#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, n, ans;

	while (1) {
		cin >> N;
		n = N;
		ans = 0;

		if (N == 0)
			break;
		for (int i = 0; i < N; i++) {
			ans += n * n;
			n--;
		}
		cout << ans << '\n';
	}

	return 0;
}