#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string voca[10] = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	bool idxFlag = true, vocaFlag = false;
	char tmp;
	string str;
	vector<char> v;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (idxFlag) {
			tmp = str[i];
			idxFlag = false;
		}


		if (str[i] == ' ') {
			if (vocaFlag == false)
				v.push_back(tmp);
			idxFlag = true;
			vocaFlag = false;
		}
	}
	v.push_back(tmp);

	cout << endl;
	cout << idxFlag << endl;
	for (char x : v) {
		cout << x << ' ';
	}

	return 0;
}