#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int sum(string s) {
	int result = 0;

	for (int i = 0; i < s.size(); i++) {
		if ((s[i] - '0') >= 1 && (s[i] - '0') <= 9)
			result += (s[i] - '0');
	}

	return result;
}

bool compare(string a, string b) {
	//1번 조건
	if (a.size() != b.size())
		return a.size() < b.size();

	else {
		int aSum = sum(a);
		int bSum = sum(b);

		//2번 조건
		if (aSum != bSum)
			return aSum < bSum;

		//3번 조건
		else
			return a < b;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N;

	cin >> N;

	vector<string> v(N);

	for (int i = 0; i < N; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), compare);

	for (string s : v)
		cout << s << "\n";

	return 0;
}