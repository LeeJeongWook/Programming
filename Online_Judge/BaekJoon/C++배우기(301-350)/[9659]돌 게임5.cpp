#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	long long N;

	cin >> N;

	if ((N % 2) == 0)
		cout << "CY";
	else if ((N % 2) == 1)
		cout << "SK";

	return 0;
}