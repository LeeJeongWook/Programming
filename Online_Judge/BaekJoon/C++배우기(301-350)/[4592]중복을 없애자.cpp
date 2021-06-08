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

	int N, num;

	while (cin >> N) {
		if (N == 0)
			break;
		vector<int> v;
		for (int i = 0; i < N; i++) {
			cin >> num;
			v.push_back(num);
		}
		
		v.erase	(unique(v.begin(), v.end()), v.end());

		for (int x : v) {
			cout << x << " ";
		}
		cout << "$\n";
	}
	return 0;
}