#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, tmp, bcnt, gcnt;
	string str, ans;
	

	cin >> T;

	cin.ignore();

	for (int test = 0; test < T; test++) {
		getline(cin, str);
		bcnt = 0, gcnt = 0;
		for (int i = 0; i < str.size(); i++) {
			tmp = str[i];
			if ((tmp == 98) || (tmp == 66)) {
				bcnt++;
			}
			else if ((tmp == 103) || (tmp == 71)) {
				gcnt++;
			}
		}
		
		if (bcnt < gcnt) {
			ans = " is GOOD";
		}
		else if (bcnt > gcnt) {
			ans = " is A BADDY";
		}
		else if (bcnt == gcnt) {
			ans = " is NEUTRAL";
		}
		cout << str << ans << '\n';
	}

	return 0;
}