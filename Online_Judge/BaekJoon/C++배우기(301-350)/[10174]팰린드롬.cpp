#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int n, idx;
	string str, ans;

	cin >> n;
	cin.ignore();
	for (int test = 0; test < n; test++) {
		getline(cin, str);
		idx = str.size() - 1;
		ans = "Yes";

		for (int i = 0; i < str.size() / 2; i++) {
			if (tolower(str[i]) != tolower(str[idx - i])) {
				ans = "No";
				break;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}