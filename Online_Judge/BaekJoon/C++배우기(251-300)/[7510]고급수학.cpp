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

	int testcase, num, max;
	string ans;
	
	cin >> testcase;

	for (int test = 0; test < testcase; test++) {
		vector<int> v;
		for (int i = 0; i < 3; i++) {
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());

		((v[0] * v[0]) + (v[1] * v[1])) == (v[2] * v[2]) ? ans = "yes" : ans = "no";

		cout << "Scenario #" << test + 1 << ":\n";
		cout << ans << "\n\n";
	}

	return 0;
}