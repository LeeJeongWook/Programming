#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, A, B;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> A >> B;
		cout << (A * A) / (B * B) << '\n';
	}

	return 0;
}