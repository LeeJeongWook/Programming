#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	bool flag;
	int num, cnt;
	string str, buf;


	while (cin >> str) {
		buf = str;
		flag = true;
		cnt = 0;
		cin >> num;

		do {
			cnt++;
			if (cnt == num) {
				cout << buf << ' ' << num << " = ";
				for (int i = 0; i < str.size(); i++)
					cout <<  str[i];
				cout << '\n';
				flag = false;
			}
		} while (next_permutation(str.begin(), str.end()));

		if (flag)
			cout << str << ' ' << num << " = " << "No permutation\n";
	}

	return 0;
}