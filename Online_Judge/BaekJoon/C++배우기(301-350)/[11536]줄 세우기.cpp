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

	int N;
	string str, ans = "NEITHER";
	vector<string> v, v_lower, v_greater;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		v.push_back(str);
		v_lower.push_back(str);
		v_greater.push_back(str);
	}

	sort(v_lower.begin(), v_lower.end());
	for (int i = 0; i < N; i++) {
		if (i == N - 1)
			ans = "INCREASING";
		if (v[i] != v_lower[i])
			break;
	}

	sort(v_greater.begin(), v_greater.end(), greater<string>());
	for (int i = 0; i < N; i++) {
		if (i == N - 1)
			ans = "DECREASING";
		if (v[i] != v_greater[i])
			break;
	}

	cout << ans;

	return 0;
}