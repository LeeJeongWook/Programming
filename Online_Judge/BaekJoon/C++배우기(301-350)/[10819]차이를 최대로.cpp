#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, tmp, cnt, max = 0;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());
	do {
		cnt = 0;
		for (int i = 0; i < N - 1; i++)
			cnt += abs(v[i] - v[i + 1]);

		if (max < cnt)
			max = cnt;
	} while (next_permutation(v.begin(), v.end()));

	cout << max;

	return 0;
}