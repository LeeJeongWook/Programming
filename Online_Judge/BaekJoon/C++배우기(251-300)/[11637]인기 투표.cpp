#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int T, n, tmp, max, sum, winner, cnt;

	cin >> T;

	for (int test = 0; test < T; test++) {
		vector<int> v;
		cnt = 0, max = 0, sum = 0;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> tmp;
			sum += tmp;
			if (max < tmp) {
				max = tmp;
			}
			v.push_back(tmp);
		}

		for (int i = 0; i < v.size(); i++) {
			if (v[i] == max) {
				winner = i + 1;
				cnt++;
			}
		}

		if (cnt > 1) {
			cout << "no winner\n";
		}
		else if ((sum / 2) < max) {
			cout << "majority winner " << winner << '\n';
		}
		else if ((sum / 2) >= max) {
			cout << "minority winner " << winner << '\n';
		}
	}

	return 0;
}