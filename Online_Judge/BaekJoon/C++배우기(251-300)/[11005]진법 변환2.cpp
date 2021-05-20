#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	vector<long long> v;
	long long N, B;

	cin >> N >> B;

	while (1) {
		v.push_back(N % B);
		N /= B;
		if (N == 0)
			break;
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] > 10)
			cout << char(v[i] + 55);
		else
			cout << v[i];
	}

	return 0;
}