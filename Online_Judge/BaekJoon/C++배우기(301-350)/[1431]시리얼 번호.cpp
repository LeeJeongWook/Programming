#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct serial {
	int size;
	int sum;
};
typedef

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, cnt, tmp11, tmp22;
	string str;
	char tmp1, tmp2;
	vector<string> v;

	cin >> N;

	for (int test = 0; test < N; test++) {
		cin >> str;
		cnt = 0;

		str.size();

		for (int i = 0; i < str.size(); i++) {
			if (str[i] <= 57) {
				cnt += str[i] - '0';
			}
		}
		v.push_back(str);
	}

	sort(v.begin(), v.end());
	
	for (string s : v) {
		cout << s << '\n';
	}

	tmp1 = '0';
	tmp2 = '9';

	tmp11 = tmp1;
	tmp22 = tmp2;
	cout << (int)tmp11 << "   " << (int)tmp22 << endl;
	
	return 0;
}