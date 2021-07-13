#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int tmp, arr[3] = { 1, 0, 0 };
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A') {
			tmp = arr[0];
			arr[0] = arr[1];
			arr[1] = tmp;
		}
		else if (str[i] == 'B') {
			tmp = arr[1];
			arr[1] = arr[2];
			arr[2] = tmp;
		}
		else if (str[i] == 'C') {
			tmp = arr[0];
			arr[0] = arr[2];
			arr[2] = tmp;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (arr[i] == 1) {
			cout << i + 1;
			break;
		}
	}
}