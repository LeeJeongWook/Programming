#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

#define MAX 1001

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int N, M, a, b;
	int arr[MAX] = { 0, };

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		arr[a]++;
		arr[b]++;
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}