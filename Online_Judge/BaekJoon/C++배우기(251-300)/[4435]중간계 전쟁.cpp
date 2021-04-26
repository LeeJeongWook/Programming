#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int gandalf[6] = { 1, 2, 3, 3, 4, 10 }, sauron[7] = { 1, 2, 2, 2, 3, 5, 10 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int testcase, tmp;

	cin >> testcase;

	for (int test = 0; test < testcase; test++) {

		int gandalfCnt = 0, sauronCnt = 0;

		for (int i = 0; i < 6; i++) {
			cin >> tmp;
			gandalfCnt += gandalf[i] * tmp;
		}
		for (int j = 0; j < 7; j++) {
			cin >> tmp;
			sauronCnt += sauron[j] * tmp;
		}

		cout << "Battle " << test+1 <<": ";
		if (gandalfCnt > sauronCnt) {
			cout << "Good triumphs over Evil\n";
		}
		else if (gandalfCnt < sauronCnt) {
			cout << "Evil eradicates all trace of Good\n";
		}
		else if (gandalfCnt == sauronCnt) {
			cout << "No victor on this battle field\n";
		}
	}

	return 0;
}