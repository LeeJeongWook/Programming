#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, d, s, t;

	cin >> T;

	for (int test = 0; test < T; test++) {
		t = 1;
		cin >> d;

		if (d == 1) {
			cout << 0 << '\n';
			continue;
		}

		while (1) {
			if (t + (t * t) <= d) {
				t++;
			}
			else if (t + (t * t) > d) {
				t--;
				break;
			}
		}
		cout << t << '\n';
	}
	
	return 0;
}