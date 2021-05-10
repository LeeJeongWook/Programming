#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int n, T, num, sum = 0, cnt = 0;

	cin >> n >> T;

	for (int i = 0; i < n; i++) {
		cin >> num;
		sum += num;
		if (sum > T)
			break;
		cnt++;
	}
	cout << cnt;

	return 0;
}