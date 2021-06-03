#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string voca[10] = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	bool flag = false;
	string str;

	cin >> str;
	str[0] = toupper(str[0]);
	cout << str[0];

	while (cin >> str) {
		flag = false;
		for (int i = 0; i < 10; i++) {
			if (str == voca[i]) {
				flag = true;
			}
		}
		if (flag)
			continue;
		else {
			str[0] = toupper(str[0]);
			cout << str[0];
		}
	}

	return 0;
}