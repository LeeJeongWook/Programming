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

	int num, ab, bc, ans;
	vector<int> v;

	for (int i = 0; i < 3; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	ab = v[1] - v[0];
	bc = v[2] - v[1];

	if (ab == bc) {
		ans = v[2] + ab;
	}
	else if(ab < bc) {
		ans = v[1] + ab;
	}
	else if (ab > bc) {
		ans = v[0] + bc;
	}

	cout << ans;

	return 0;
}