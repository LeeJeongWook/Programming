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

	int a, b, c, d;

	while (1) {
		vector<int> v;
		cin >> a >> b >> c >> d;

		if ((a == 0) && (b == 0) && (c == 0) && (d == 0)) {
			break;
		}
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);

		sort(v.begin(), v.end());

		cout << v[2] - v[1] << " " << v[3] - v[0] << '\n';
	}

	return 0;
}