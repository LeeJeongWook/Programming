#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int n, p, tmp;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		cin >> p;
		if (p % 2 == 0) {
			if (n / 2 >= p)
				cout << p - 1 << ' ' << n - p + 1 << ' ' << n - p + 2 << '\n';
			else cout << n - p + 1 << ' ' << n - p + 2 << ' ' << p - 1 << '\n';
		}
		else {
			if (n / 2 >= p)
				cout << p + 1 << ' ' << n - p << ' ' << n - p + 1 << '\n';
			else
				cout << n - p << ' ' << n - p + 1 << ' ' << p + 1 << '\n';
		}
	}

	return 0;
}