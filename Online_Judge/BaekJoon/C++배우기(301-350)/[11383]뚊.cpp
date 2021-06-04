#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, M, idx;
	string tmp, ans;
	vector<string> str1, str2;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		str1.push_back(tmp);
	}

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		str2.push_back(tmp);
	}

	ans = "Eyfa";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			idx = j * 2;
			if ((str1[i][j] != str2[i][idx]) || (str1[i][j] != str2[i][idx + 1])) {
				ans = "Not Eyfa";
				break;
			}
		}
	}
	cout << ans;

	return 0;
}