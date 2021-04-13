#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	string str;
	int T;
	double num;
	
	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> num >> str;
		cout << fixed;
		cout.precision(4);

		if (str == "kg") {
			cout << num * 2.2046 << " lb\n";
		}
		else if (str == "lb") {
			cout << num * 0.4536 << " kg\n";
		}
		else if (str == "l") {
			cout << num * 0.2642 << " g\n";
		}
		else if (str == "g") {
			cout << num * 3.7854 << " l\n";
		}
	}
	return 0;
}