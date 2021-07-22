#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

#define MAX 101

using namespace std;

int check(int(&arr)[5][5]) {
	int cnt = 0;
	bool flag = false;

	for (int i = 0; i < 5; i++) {
		flag = false;
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] != 0) {
				flag = true;
				break;
			}
		}
		if (!flag)
			cnt++;
	}

	for (int i = 0; i < 5; i++) {
		flag = false;
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] != 0) {
				flag = true;
				break;
			}
		}
		if (!flag)
			cnt++;
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i][i] != 0) {
			break;
		}
		if (i == 4)
			cnt++;
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i][4 - i] != 0) {
			break;
		}
		if (i == 4)
			cnt++;
	}

	return cnt;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int tmp, bingo[5][5] = { 0, }, ans = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> bingo[i][j];
		}
	}

	for (int t = 0; t < 25; t++) {
		ans++;

		cin >> tmp;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (bingo[i][j] == tmp)
					bingo[i][j] = 0;
			}
		}



		if (check(bingo) >= 3) {
			cout << ans;
			return 0;
		}
	}
	return 0;
}