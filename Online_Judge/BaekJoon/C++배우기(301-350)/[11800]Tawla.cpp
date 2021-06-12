#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, a, b;
	string list[6] = { "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" },
		listb[6] = { "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" };

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;

		if (((a == 6) && (b == 5)) || ((a == 5) && (b == 6)))
			cout << "Case " << i + 1 << ": " << "Sheesh Beesh" << '\n';
		else if (a < b)
			cout << "Case " << i + 1 << ": " << list[b - 1] << ' ' << list[a - 1] << '\n';
		else if (a > b)
			cout << "Case " << i + 1 << ": " << list[a - 1] << ' ' << list[b - 1] << '\n';
		else if (a == b)
			cout << "Case " << i + 1 << ": " << listb[a - 1] << '\n';
	}

	return 0;
}