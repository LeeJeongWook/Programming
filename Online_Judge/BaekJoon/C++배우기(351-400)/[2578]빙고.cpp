#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

#define MAX 101
using namespace std;

bool check(int (&arr)[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int tmp, cnt = 0, bingo[5][5] = { 0, };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> bingo[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cnt++;
			cin >> tmp;

			if (bingo[i][j] == tmp)
				bingo[i][j] = 0;

			if(cnt == 1)
				check(bingo);
		}
	}
	return 0;
}