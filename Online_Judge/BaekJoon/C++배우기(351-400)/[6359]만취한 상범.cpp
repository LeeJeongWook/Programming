#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

#define MAX 101
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, N, cnt;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cnt = 0;
		cin >> N;
		bool room[MAX] = { 0, };

		for (int i = 2; i <= N; i++) {
			for (int j = i; j <= N; j += i) {
				room[j] == 0 ? room[j] = 1 : room[j] = 0;
			}
		}

		for (int i = 1; i <= N; i++) {
			if (room[i] == 0)
				cnt++;
		}
		cout << cnt << '\n';
	}
}