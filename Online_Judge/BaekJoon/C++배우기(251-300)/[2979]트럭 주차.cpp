#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

#define MAX 101

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int A, B, C, a, b, ans = 0;
	int check[MAX] = { 0, };

	cin >> A >> B >> C;

	for (int test = 0; test < 3; test++) {
		cin >> a >> b;
		for (int i = a; i < b; i++) {
			check[i]++;
		}
	}

	for (int i = 1; i < 101; i++) {
		if (check[i] == 1) {
			ans += A;
		}
		else if (check[i] == 2) {
			ans += B * 2;
		}
		else if (check[i] == 3) {
			ans += C * 3;
		}
	}
	cout << ans;

	return 0;
}