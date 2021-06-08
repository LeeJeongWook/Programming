#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int tmp, arr[22], a, b;

	for (int i = 1; i < 21; i++)
		arr[i] = i;

	for (int test = 0; test < 10; test++) {
		cin >> a >> b;
		while (1) {
			if (a == b)
				break;

			tmp = arr[a];
			arr[a] = arr[b];
			arr[b] = tmp;

			if ((b - a) == 1)
				break;
			a++;
			b--;
		}
	}

	for (int i = 1; i < 21; i++)
		cout << arr[i] << " ";

	return 0;
}