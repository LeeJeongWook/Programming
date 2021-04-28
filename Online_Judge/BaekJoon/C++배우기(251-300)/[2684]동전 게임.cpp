#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

char coin[8][3] = { {'T','T','T'},{'T','T','H'},{'T','H','T'},{'T','H','H'},{'H','T','T'},{'H','T','H'},{'H','H','T'},{'H','H','H'} };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int P;
	string str;

	cin >> P;

	for (int test = 0; test < P; test++) {
		int cnt = 0, check[8] = { 0, };
		cin >> str;

		for (int i = 0; i < str.size() - 2; i++) {
			for (int j = 0; j < 8; j++) {
				if ((str[i] == coin[j][0]) && (str[i + 1] == coin[j][1]) && (str[i + 2] == coin[j][2]))
					check[j]++;
			}
		}

		for (int i = 0; i < 8; i++) {
			cout << check[i] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}