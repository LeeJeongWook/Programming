#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int E, S, M, e = 0, s = 0, m = 0, ans = 0;

	cin >> E >> S >> M;
	
	while(1) {
		e++;
		s++;
		m++;
		ans++;
		if (e > 15)
			e = 1;
		if (s > 28)
			s = 1;
		if (m > 19)
			m = 1;

		if ((e == E) && (s == S) && (m == M))
			break;
	}

	cout << ans;

	return 0;
}