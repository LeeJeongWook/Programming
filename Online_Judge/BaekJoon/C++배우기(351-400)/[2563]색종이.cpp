#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int pcnt, x, y, paper[101][101] = { 0, }, ans = 0;

	cin >> pcnt;

	for (int test = 0; test < pcnt; test++) {
		cin >> x >> y;

		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				paper[i][j]++;
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (paper[i][j] != 0) {
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}