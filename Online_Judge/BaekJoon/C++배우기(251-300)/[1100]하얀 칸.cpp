#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int cnt = 0;
	char tmp, board[8][8] = { 0, };

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> tmp;
			if ((tmp == 'F') && (((i + j) % 2) == 0))
				cnt++;
		}
	}

	cout << cnt;

	return 0;
}