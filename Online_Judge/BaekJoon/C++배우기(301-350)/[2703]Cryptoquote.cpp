#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, idx;
	char tmp;
	string str, decrypted;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin.ignore();
		getline(cin, str);
		cin >> decrypted;

		for (int i = 0; i < str.size(); i++) {
			if (((str[i] - 'A') < 26) && (0 <= (str[i] - 'A'))) {
				idx = str[i] - 'A';
				str[i] = decrypted[idx];
			}
		}
		cout << str << '\n';
	}


	return 0;
}