#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	vector<int> v;
	string str;
	int num, A, B, C;

	for (int i = 0; i < 3; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	
	A = v[0];
	B = v[1];
	C = v[2];

	cin >> str;
	for (int i = 0; i < 3; i++) {
		if (str[i] == 'A') {
			cout << A << " ";
		}
		else if (str[i] == 'B') {
			cout << B << " ";
		}
		else if (str[i] == 'C') {
			cout << C << " ";
		}
	}

	return 0;
}