#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int A, B, C;

	cin >> A >> B >> C;

	(B - A) > (C - B) ? cout << B - A - 1 : cout << C - B - 1;
}