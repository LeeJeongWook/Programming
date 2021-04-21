#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int testcase;
	string str;

	cin >> testcase;

	for (int test = 0; test < testcase; test++) {
		cin >> str;
		cout << "String #" << test + 1 << '\n';
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 90) {
				str[i] = 'A';
			}
			else {
				str[i]++;
			}
		}
		cout << str << "\n\n";
	}

	return 0;
}