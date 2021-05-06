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

	long long A, B, C, ans;

	cin >> A >> B >> C;
	
	ans = A + B + C;

	cout << ans;

	return 0;
}