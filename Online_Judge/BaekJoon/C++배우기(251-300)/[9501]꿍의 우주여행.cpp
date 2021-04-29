#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, N, D, v, f, c, cnt;
	cin >> T;

	for (int test = 0; test < T; test++) {
		cnt = 0;
		cin >> N >> D;
		
		for (int i = 0; i < N; i++) {
			cin >> v >> f >> c;
			if ((v * f / c) >= D) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	
	return 0;
}