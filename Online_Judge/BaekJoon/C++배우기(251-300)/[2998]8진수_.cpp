#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	string str, tmp;
	int ans;

	cin >> str;

	int idx = str.size() % 3;

	if (idx == 1) {
		cout << 1;
	}
	else if (idx == 2) {
		tmp = str.substr(0, idx);
		cout << ((int)tmp[0] * 2) + (int)tmp[1];
	}
	
	for (int i = idx; i <= str.size() - 3; i += 3) {
		tmp = str.substr(i, 3);
		cout << ((tmp[0] - '0') * 4) +((tmp[1] - '0') * 2) + (tmp[2] - '0');
	}


	return 0;
}

