#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int check[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int N, tmp;
	bool flag;

	cin >> N;

	for (int i = 0; i < N; i++) {
		flag = false;
		for (int j = 0; j < 10; j++) {
			cin >> tmp;
			if ((j == 9) && (flag == false))
				cout << i + 1 << '\n';
			else if (tmp != check[j])
				flag = true;
		}
	}

	return 0;
}