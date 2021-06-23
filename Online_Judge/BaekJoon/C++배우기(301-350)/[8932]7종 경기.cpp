#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <cmath>

#define track_100(p)	int(9.23076 * pow((26.7 - p), 1.835))
#define track_200(p)	int(4.99087 * pow((42.5 - p), 1.81))
#define track_800(p)	int(0.11193 * pow((254 - p), 1.88))
#define field_n(p)			int(1.84523 * pow((p - 75), 1.348))
#define field_p(p)			int(56.0211 * pow((p - 1.5), 1.05))
#define field_m(p)		int(0.188807 * pow((p - 210), 1.41))
#define field_c(p)			int(15.9803 * pow((p - 3.8), 1.04))

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int T, a, b, c, d, e, f, g;

	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> a >> b >> c >> d >> e >> f >> g;
		cout << track_100(a) + field_n(b) + field_p(c) + track_200(d) + field_m(e) + field_c(f) + track_800(g) << '\n';

	}

	return 0;
}