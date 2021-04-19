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

	int A, B, C, D, P, X, Y;

	cin >> A >> B >> C >> D >> P;

	X = A* P;

	if (P <= C) {
		Y = B;
	}
	else {
		Y = B + (P - C) * D;
	}

	cout << (X < Y ? X : Y);

	return 0;
}