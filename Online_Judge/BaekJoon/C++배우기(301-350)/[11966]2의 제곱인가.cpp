#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("input.txt", "r", stdin);

	int N, cmp = 1;

	cin >> N;

	while (N >= cmp) {
		if (N == cmp) {
			cout << "1";
			break;
		}
		cmp *= 2;
		if (N < cmp) {
			cout << "0";
			break;
		}
	}

	return 0;
}