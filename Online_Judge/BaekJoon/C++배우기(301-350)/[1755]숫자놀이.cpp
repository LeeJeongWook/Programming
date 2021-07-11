#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string number[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int M, N;
	string str;
	vector<pair<string, int>> v;

	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		if (i < 10) {
			v.push_back(make_pair(number[i], i));
		}
		else {
			str = number[i / 10] + number[i % 10];
			v.push_back(make_pair(str, i));
		}
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		if ((i != 0) && ((i % 10) == 0))
			cout << '\n';
		cout << v[i].second << ' ';
	}
}