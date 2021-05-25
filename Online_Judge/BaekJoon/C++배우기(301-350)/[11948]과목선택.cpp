#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int score, E, F, min = 100, ans = 0;

	for (int i = 0; i < 4; i++) {
		cin >> score;
		if (score < min)
			min = score;
		ans += score;
	}
	
	ans -= min;
		
	cin >> E >> F;

	E < F ? ans += F : ans += E;
	
	cout << ans;

	return 0;
}