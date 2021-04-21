#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int check[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	long long a1, a2, a3;

	while (1) {
		cin >> a1 >> a2 >> a3;

		if ((a1 == 0) && (a2 == 0) && (a3 == 0)) {
			break;
		}

		if ((a2 - a1) == (a3 - a2)) {
			cout << "AP " << a3 + (a2 - a1) << '\n';
		}
		else if ((a2 - a1) != (a3 - a2)) {
			cout << "GP " << a3 * (a2 / a1) << '\n';
		}
	}

	return 0;
}