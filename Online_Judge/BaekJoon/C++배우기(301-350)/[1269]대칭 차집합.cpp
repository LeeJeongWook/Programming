#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int A, B, tmp;
	set<int> a;

	cin >> A >> B;

	for (int i = 0; i < A; i++) {
		cin >> tmp;
		a.insert(tmp);
	}
	
	for (int i = 0; i < B; i++) {
		cin >> tmp;
		if (a.count(tmp))
			a.erase(tmp);
		else
			a.insert(tmp);
	}

	cout << a.size();

	return 0;
}