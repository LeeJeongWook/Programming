#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <cmath>

using namespace std;

bool Isprime(int n) {
	if ((n == 1) || (n == 2))
		return true;
	
	for (int i = 2; i < n; i++) {
		if ((n % i) == 0)
			return false;
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int sum = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if ((int)str[i] <= 90) {
			sum += (int)str[i] - 38;
		}
		else {
			sum += (int)str[i] - 96;
		}
	}

	if (Isprime(sum))
		cout << "It is a prime word.";
	else
		cout << "It is not a prime word.";

	return 0;
}