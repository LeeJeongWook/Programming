#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	string S;
	int tmp;

	while (1) {
		cin >> S;

		if (S == "0")
			break;
		else if (S.size() <= 1) {
			cout << S << '\n';
			continue;
		}
		while (1) {
			tmp = 1;
			cout << S << " ";
			for (int i = 0; i < S.size(); i++) {
				tmp *= (S[i] - '0');
			}
			S = to_string(tmp);
			if (tmp < 10)
				break;
		}
		cout << S << '\n';
	}

	return 0;
}