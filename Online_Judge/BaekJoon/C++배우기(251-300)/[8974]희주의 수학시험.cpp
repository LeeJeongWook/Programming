#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int A, B, cnt = 0, ans = 0;
	vector<int> v;

	cin >> A >> B;

	for (int i = 1; i <= B; i++) {
		for (int j = 0; j < i; j++) {
			cnt++;
			if ((A <= cnt) && (cnt <= B)) {
				ans += i;
				cout << "i : " << i << endl;
				if (cnt == (B - A + 1)) {
					cout << ans << endl;
					return 0;
				}
			}
		}
	}
	for (int x : v) {
		cout << x << " ";
	}

	return 0;
}