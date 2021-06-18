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

	int T, num, ab, bc;
	string ans;

	cin >> T;
	for (int test = 1; test <= T; test++) {
		vector<int> v;

		for (int i = 0; i < 3; i++) {
			cin >> num;
			v.push_back(num);
		}

		sort(v.begin(), v.end());

		if (v[2] >= (v[0] + v[1]))
			ans = "invalid!";
		else if ((v[0] == v[1]) && (v[1] == v[2]))
			ans = "equilateral";
		else if ((v[0] == v[1]) || (v[1] == v[2]))
			ans = "isosceles";
		else if ((v[0] != v[1]) && (v[1] != v[2]))
			ans = "scalene";

		cout << "Case #" << test << ": " << ans << '\n';
	}
	return 0;
}