#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	string N;
	int B, ans = 0, mul = 1;
	
	cin >> N >> B;
	
	for (int i = N.size() - 1; i >= 0; i--) {

		if (N[i] >= 65) 
			ans += (N[i] - 55) * mul;
		else 
			ans += (N[i] - 48) * mul;

		mul *= B;
	}

	cout << ans;

	return 0;
}

