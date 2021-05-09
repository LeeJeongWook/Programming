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
	//cout << v[(2 - 1) - 0] << endl;
	for (int swap = 0; swap < M; swap++) {
		cin >> i >> j;
		for (int x = i - 1; x < j - 1; x++) {
			tmp = v[x];
			v[x] = v[(j - 1) - x];
			v[(j - 1) - x] = tmp;
		}
		for (int x : v) {
			cout << x << " ";
		}
		cout << '\n';
	}


	return 0;
}