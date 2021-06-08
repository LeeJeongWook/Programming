#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int cnt, tmp;
	string str;
	
	while (getline(cin, str)) {
		if (str == "#")
			break;

		int check[26] = { 0, };
		cnt = 0;

		for (int i = 0; i < str.size(); i++) {
			tmp = str[i];
			tmp = tolower(tmp);
			
			if ((97 <= tmp) && (tmp <= 122)) {
				check[tmp - 97]++;
			}
		}

		for (int i = 0; i < 26; i++) {
			if (check[i] != 0)
				cnt++;
		}
		
		cout << cnt << '\n';
	}

	return 0;
}