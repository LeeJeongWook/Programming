#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int N, M, i, j, tmp;
	vector<int> v;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		v.push_back(i+1);
	}

	for (int test = 0; test < M; test++) {
		cin >> i >> j;
		tmp = v[i - 1];
		v[i - 1] = v[j - 1];
		v[j - 1] = tmp;
	}

	for (int x : v) {
		cout << x << " ";
	}
	
	return 0;
}