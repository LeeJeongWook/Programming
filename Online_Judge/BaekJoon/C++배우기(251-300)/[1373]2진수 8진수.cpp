#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

    string str;
	cin >> str;

	int sz = str.size();

	if (sz % 3 == 1) {
		cout << str[0];
	}
	else if (sz % 3 == 2) {
		cout << (str[0]-'0')*2 +(str[1]-'0');
	}

	for (int i = sz % 3; i < sz; i += 3) {
		cout << (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i+2] - '0');
	}
	cout << '\n';

	return 0;
}