#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, d, n, s, p, a, b;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> d >> n >> s >> p;
		a = n * s;
		b = (n * p) + d;

		if (a < b)
			cout << "do not parallelize\n";
		else if (a > b)
			cout << "parallelize\n";
		else if (a == b)
			cout << "does not matter\n";
	}

	return 0;
}