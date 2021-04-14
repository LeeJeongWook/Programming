#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

string upper(string str) {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '5')
			str[i] = '6';
	}
	return str;
}

string lower(string str) {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '6')
			str[i] = '5';
	}
	return str;
}

int calculate(string str1, string str2) {
	int a = 0, b = 0, mul = 1;
	for (int i = str1.size() - 1; i >= 0; i--) {
		a += (str1[i] - '0') * mul;
		mul *= 10;
	}

	mul = 1;

	for (int i = str2.size() - 1; i >= 0; i--) {
		b += (str2[i] - '0') * mul;
		mul *= 10;
	}

	return a + b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	string str1, str2;

	cin >> str1 >> str2;

	cout << calculate(lower(str1), lower(str2)) << ' ' << calculate(upper(str1), upper(str2));

	return 0;
}