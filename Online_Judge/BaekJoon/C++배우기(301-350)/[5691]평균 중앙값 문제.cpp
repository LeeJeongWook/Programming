#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	long long A, B, C;

	while (1) {
		cin >> A >> B;
		if ((A == 0) && (B == 0))
			break;
		cout << 2 * A - B << '\n';
	}

	return 0;
}