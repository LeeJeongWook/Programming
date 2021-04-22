#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt", "r", stdin);

	int N, tmp;
	bool flag = false;
	deque<int> s;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		s.push_back(i);
	}
	
	while (s.size() > 1) {
		if (flag == false) {
			flag = true;
			s.pop_front();
		}
		else if (flag == true) {
			flag = false;
			tmp = s.front();
			s.pop_front();
			s.push_back(tmp);
		}
	}

	cout << s.front();
	
	return 0;
}