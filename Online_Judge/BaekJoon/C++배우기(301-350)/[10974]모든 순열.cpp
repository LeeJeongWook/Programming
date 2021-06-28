#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N;
	vector<int> v;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		v.push_back(i);
	}

	do {
		for (int x : v) {
			cout << x << " ";
		}
		cout << '\n';
	} while (next_permutation(v.begin(), v.end()));

	return 0;
}