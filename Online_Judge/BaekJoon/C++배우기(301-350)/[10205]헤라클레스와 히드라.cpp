#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int K, h;
	string str;

	cin >> K;

	for (int test = 0; test < K; test++) {
		cin >> h >> str;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'c') {
				h++;
			}
			else if (str[i] == 'b') {
				h--;
			}
		}
		
		cout << "Data Set " << test + 1 << ":\n" << h << "\n\n";
	}

	return 0;
}