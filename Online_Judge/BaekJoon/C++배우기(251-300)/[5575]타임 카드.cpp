#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int a, b, ah, am, as, bh, bm, bs, ans;

	for (int i = 0; i < 3; i++) {
		cin >> ah >> am >> as >> bh >> bm >> bs;
		a = (ah * 3600) + (am * 60) + (as);
		b = (bh * 3600) + (bm * 60) + (bs);
		ans = b - a;

		cout << ans / 3600 << " ";
		ans %= 3600;
		cout << ans / 60 << " ";
		ans %= 60;
		cout << ans % 60 << '\n';
	}

	return 0;
}