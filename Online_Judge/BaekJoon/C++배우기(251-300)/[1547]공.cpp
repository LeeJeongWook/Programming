#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int M, X, Y, tmp = 1;

	cin >> M;

	for (int test = 0; test < M; test++) {
		cin >> X >> Y;
		if (X == tmp) {
			tmp = Y;
		}
		else if (Y == tmp) {
			tmp = X;
		}
	}
	cout << tmp;
	
	return 0;
}