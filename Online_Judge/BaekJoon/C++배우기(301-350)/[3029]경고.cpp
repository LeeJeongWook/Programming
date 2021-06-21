#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int ah, am, as, bh, bm, bs, h, m, s;
	string A, B;

	cin >> A >> B;
	ah = ((A[0] - '0') * 10 + (A[1] - '0'));
	am = ((A[3] - '0') * 10 + (A[4] - '0'));
	as = ((A[6] - '0') * 10 + (A[7] - '0'));
	bh = ((B[0] - '0') * 10 + (B[1] - '0'));
	bm = ((B[3] - '0') * 10 + (B[4] - '0'));
	bs = ((B[6] - '0') * 10 + (B[7] - '0'));

	if (as <= bs)
		s = bs - as;
	else {
		s = (60 - as) + bs;
		bm--;
	}

	if (am <= bm)
		m = bm - am;
	else {
		m = (60 - am) + bm;
		bh--;
	}

	if (ah <= bh)
		h = bh - ah;
	else {
		h = (24 - ah) + bh;
	}

	if ((h == 0) && (m == 0) && (s == 0))
		h = 24;
	cout.width(2);
	cout.fill('0');
	cout << h << ":";
	cout.width(2);
	cout.fill('0');
	cout << m << ":";
	cout.width(2);
	cout.fill('0');
	cout << s;

	return 0;
}