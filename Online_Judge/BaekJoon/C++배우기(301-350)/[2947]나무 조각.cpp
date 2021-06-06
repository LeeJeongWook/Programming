#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int num, tmp, idx = 0;
	vector<int> v;

	for (int i = 0; i < 5; i++) {
		cin >> num;
		v.push_back(num);
	}

	while (idx < 4) {
		if (v[idx] > v[idx + 1]) {
			tmp = v[idx];
			v[idx] = v[idx + 1];
			v[idx + 1] = tmp;

			for (int x : v) {
				cout << x << " ";
			}
			cout << '\n';
		}
		if (idx == 3) {
			for (int i = 0; i < 5; i++) {
				if (v[i] != i + 1) {
					idx = -1;
					break;
				}
			}
		}
		idx++;
	}

	return 0;
}