#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cout << "Hello World, Judge " << i << "!\n";
	}

	return 0;
}