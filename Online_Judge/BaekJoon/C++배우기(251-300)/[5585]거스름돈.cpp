#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int n, cnt = 0;

	cin >> n;

	n = 1000 - n;

	cnt += n / 500;
	n %= 500;
	cnt += n / 100;
	n %= 100;
	cnt += n / 50;
	n %= 50;
	cnt += n / 10;
	n %= 10;
	cnt += n / 5;
	n %= 5;
	cnt += n / 1;
	n %= 1;

	cout << cnt;

	return 0;
}