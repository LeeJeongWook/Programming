#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	vector<int> v;
	int N, B;

	cin >> N >> B;

	while (1) {
		v.push_back(N % B);
		N /= B;
		if (N == 0)
			break;
	}

	vector<int>::reverse_iterator iter;
	for (iter = v.rbegin(); iter != v.rend(); iter++) {
		if (*iter >= 10) {
			char c = *iter - 10 + 'A';
			cout << c;
		}
		else {
			cout << *iter;
		}
	}

	return 0;
}