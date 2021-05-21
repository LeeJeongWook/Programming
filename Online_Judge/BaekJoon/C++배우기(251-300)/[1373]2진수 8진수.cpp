#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	string str;
	int idx = 0;

	cin >> str;

	for (int i = str.size() - 1; i >= 0; i--) {

		cout << (int)str[i] - '0'<< " ";
	}

	return 0;
}