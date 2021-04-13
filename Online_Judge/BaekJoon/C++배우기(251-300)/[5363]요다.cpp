#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, cnt;
	string str, tmp;

	cin >> N;

	cin.ignore();

	for (int i = 0; i < N; i++) {
		cnt = 0;
		getline(cin, str);

		for (int j = 0; j < str.size(); j++) {
			if (str[j] == ' ') {
				cnt++;
				if (cnt == 2) {
					tmp = str.substr(0, j);

					str.erase(0, j+1);
					str.push_back(' ');
					for (int k = 0; k < tmp.size(); k++) {
						str.push_back(tmp[k]);
					}
					cout << str << endl;
				}
			}
		}
	}
	return 0;
}