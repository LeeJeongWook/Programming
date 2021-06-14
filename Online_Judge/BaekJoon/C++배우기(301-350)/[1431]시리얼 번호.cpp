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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N;
	string str;
	vector<string> v;

	for (int test = 1; test <= N; test++) {
		cin >> str;
		v.push_back(str);
	}

	return 0;
}