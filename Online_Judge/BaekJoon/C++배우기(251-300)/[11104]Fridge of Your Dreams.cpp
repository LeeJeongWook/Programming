#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int n;
	string str;

	cin >> n;

	for (int test = 0; test < n; test++) {
		int ans = 0, bin = 1;
		cin >> str;

		for (int i = str.size() - 1; i >= 0; i--) {
			ans += (str[i] - '0') * bin;
			bin *= 2;
		}
		cout << ans << '\n';
	}
	
	return 0;
}