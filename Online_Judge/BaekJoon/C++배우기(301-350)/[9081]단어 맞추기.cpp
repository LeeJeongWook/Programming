#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T;
	string str;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> str;
		
		if (next_permutation(str.begin(), str.end())) {
			for (int i = 0; i < str.size(); i++)
				cout << str[i];
		}
		else {
			prev_permutation(str.begin(), str.end());
			for (int i = 0; i < str.size(); i++)
				cout << str[i];
		}
		cout << '\n';
	}

	return 0;
}