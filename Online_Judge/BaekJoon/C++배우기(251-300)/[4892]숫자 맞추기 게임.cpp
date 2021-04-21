#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int cnt = 0, n0, n1, n2, n3, n4;

	while (1) {
		cnt++;
		cin >> n0;
		if (n0 == 0) {
			break;
		}
		cout << cnt << ". ";

		n1 = 3 * n0;

		if ((n1 % 2) == 0) {
			cout << "even ";
			n2 = n1 / 2;
		}
		else {
			cout << "odd ";
			n2 = (n1 + 1) / 2;
		}

		n3 = 3 * n2;

		n4 = n3 / 9;

		cout << n4 << '\n';
	}

	return 0;
}