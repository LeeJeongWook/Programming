#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int n;
	vector<int> v;

	for (int i = 0; i < 3; i++) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	if( (v[0] == 60) && (v[1] == 60) && (v[2] == 60) ){
		cout << "Equilateral";
	}
	else if ( ((v[0] + v[1] + v[2]) == 180) && ((v[0] == v[1]) || (v[1] == v[2])) ) {
		cout << "Isosceles";
	}
	else if ((v[0] + v[1] + v[2]) == 180) {
		cout << "Scalene";
	}
	else if ((v[0] + v[1] + v[2]) != 180) {
		cout << "Error";
	}

	return 0;
}