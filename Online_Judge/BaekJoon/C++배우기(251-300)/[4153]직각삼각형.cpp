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

	long long tmp, sum;

	while (1) {
		sum = 0;
		vector<long long> v;
		for (int i = 0; i < 3; i++) {
			cin >> tmp;
			sum += tmp;
			v.push_back(tmp);
		}

		if (sum == 0)
			break;

		sort(v.begin(), v.end());

		if (((v[0] * v[0]) + (v[1] * v[1])) == (v[2] * v[2])) {
			cout << "right" << '\n';
		}
		else {
			cout << "wrong" << '\n';
		}
	}

	return 0;
}