#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <filesystem>
#include <vector>

#define MAX 10001

using namespace std;

bool check[MAX] = { 0, };
vector<int> v;

void Permutation(int depth, int r) {
	if (depth == r) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i < r; i++) {
		if (!check[i]) {
			check[i] = true;
			v[depth] = i;
			Permutation(depth + 1, r);
			check[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N;
	
	cin >> N;
	
	for (int i = 1; i <= N; i++)
		v.push_back(i);

	Permutation(0, N);

	return 0;
}