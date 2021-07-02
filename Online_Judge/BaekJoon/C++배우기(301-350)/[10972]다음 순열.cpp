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

	int N, tmp;

	cin >> N;
	
	vector<int> v(N);

	for (int i = 1; i <= N; i++)
		v[i - 1] = i;

	do {
		for (int i = 0; i < N; i++)
			cout << v[i] << " ";

		cout << '\n';
	}while(prev_permutation(v.begin(), v.end())

	return 0;
}