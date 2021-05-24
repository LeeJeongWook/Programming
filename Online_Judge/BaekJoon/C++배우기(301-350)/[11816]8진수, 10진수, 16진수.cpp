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
	int mul = 1, ans = 0;

	cin >> str;

	if (str[0] == '0') {
		if (str[1] == 'x') {
			for (int i = str.size() - 1; i > 1; i--) {
				if (str[i] > 57)
					ans += (str[i] - 87) * mul;
				else 
					ans += (str[i] - '0') * mul;
				mul *= 16;
			}
		}
		else {
			for (int i = str.size() - 1; i > 0; i--) {
				ans += (str[i] - '0') * mul;
				mul *= 8;
			}
		}
		cout << ans;
	}
	else {
		cout << str;
	}

	return 0;
}