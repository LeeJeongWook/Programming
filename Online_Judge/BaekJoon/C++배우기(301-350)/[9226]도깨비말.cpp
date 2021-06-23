#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	bool flag = false;
	char tmp;
	string str;
	char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };

	while (1) {
		deque<char> dq;
		cin >> str;

		for (int i = 0; i < str.size(); i++) {
			dq.push_back(str[i]);
		}

		if (dq[0] == '#')
			break;
		
		for (int i = 0; i < str.size(); i++) {
			flag = false;
			for (int j = 0; j < 5; j++) {
				if (str[i] == vowel[j]) {
					flag = true;
					break;
				}
			}
			if (flag)
				break;
			dq.push_back(dq.front());
			dq.pop_front();
		}
		dq.push_back('a');
		dq.push_back('y');

		for (char x : dq) {
			cout << x;
		}
		cout << '\n';
	}

	return 0;
}