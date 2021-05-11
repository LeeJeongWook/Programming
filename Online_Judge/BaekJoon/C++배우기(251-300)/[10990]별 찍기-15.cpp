#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("input.txt", "r", stdin);

	int N, cnt, a, b;

	cin >> N;
	cnt = N;
	b = cnt - 1;

	for (int i = 0; i < N; i++) {
		a = cnt - 1;
		for (int j = 0; j < cnt; j++) {
			if ((j == a) || (j == b)) {
				cout << "*";
			}
			else {
				cout << ' ';
			}
		}
		cnt++;
		b--;
		cout << '\n';
	}

	return 0;
}