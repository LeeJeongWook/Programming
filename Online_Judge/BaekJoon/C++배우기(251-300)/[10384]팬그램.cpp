#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int n;
	string str, ans;

	cin >> n;
	cin.ignore();

	for (int test = 0; test < n; test++) {
		int check[26] = { 0, };
		ans = "Triple pangram!!!";

		getline(cin, str);

		for (int i = 0; i < str.size(); i++) {
			str[i] = tolower(str[i]);
			
			for (int j = 0; j < 26; j++) {
				if (alpha[j] == str[i]) {
					check[j]++;
					break;
				}
			}
		}

		sort(check + 0, check + 26, greater<int>());

		for (int j = 0; j < 26; j++) {
			if (check[j] < 1) {
				ans = "Not a pangram";
			}
			else if (check[j] < 2) {
				ans = "Pangram!";
			}
			else if (check[j] < 3) {
				ans = "Double pangram!!";
			}
		}

		cout << "Case " << test + 1 << ": " << ans << '\n';
	}

	return 0;
}