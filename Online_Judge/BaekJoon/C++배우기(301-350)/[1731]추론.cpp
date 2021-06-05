#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, num, ans;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	if ((v[1] - v[0]) == (v[2] - v[1])) {
		ans = v[v.size() - 1] + (v[2] - v[1]);
	}
	else {
		ans = v[v.size() - 1] * (v[1] / v[0]);
	}
	cout << ans;

	return 0;
}