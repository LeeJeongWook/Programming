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

	int N, M, i, j, k, basket[101] = { 0, };

	cin >> N >> M;

	for (int test = 0; test < M; test++) {
		cin >> i >> j >> k;

		for (int x = i - 1; x < j; x++) {
			basket[x] = k;
		}
	}

	for (int z = 0; z < N; z++) {
		cout << basket[z] << " ";
	}

	return 0;
}