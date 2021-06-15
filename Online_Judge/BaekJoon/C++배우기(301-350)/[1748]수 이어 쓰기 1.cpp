#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, weight = 10, cnt = 1, ans = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (i >= weight) {
			cnt++;
			weight *= 10;
		}
		ans += cnt;
	}

	cout << ans;

	return 0;
}