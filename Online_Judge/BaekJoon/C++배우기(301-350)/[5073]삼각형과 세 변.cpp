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

	int num;
	
	while (1) {
		vector<int> v;
		for (int i = 0; i < 3; i++) {
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		
		if ((v[0] == 0) && (v[1] == 0) && (v[2] == 0)) {
			break;
		}
		else if ((v[0] + v[1]) <= v[2])
			cout << "Invalid\n";
		else if ((v[0] == v[1]) && (v[1] == v[2]))
			cout << "Equilateral\n";
		else if ((v[0] == v[1]) || (v[0] == v[2]) || (v[1] == v[2]))
			cout << "Isosceles\n";
		else
			cout << "Scalene\n";
	}

	return 0;
}