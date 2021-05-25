#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	double H, P;
	double ans;

	while (cin >> H && cin >> P) {

		ans = H / P;

		cout << fixed;
		cout.precision(2);
		cout << ans << '\n';
	}

	return 0;
}