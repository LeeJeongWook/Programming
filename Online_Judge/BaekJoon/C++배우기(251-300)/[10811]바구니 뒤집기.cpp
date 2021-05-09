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

	int N, M, i, j, tmp;
	vector<int> v;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		v.push_back(i);
	}

	for (int swap = 0; swap < M; swap++) {
		cin >> i >> j;
		int size = j - i;
		for (int x = 0; x < (size + 1) / 2; x++) {
			tmp = v[i - 1];
			v[i - 1] = v[(j - 1) - x];
			v[(j - 1) - x] = tmp;
			i++;
		}
	}

	for (int x : v) {
		cout << x << " ";
	}

	return 0;
}