#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	string str, strtmp;
	int N, B, tmp, div, ans = 0;
	
	cin >> N >> B;
	
	div = B;

	while (N != 0) {
		tmp = N % div;

		N -= tmp;


		cout << div - tmp << '\n';
		//strtmp = 
		//str.insert(0, strtmp);
		if()
		cout << "div :  " << div << endl;
		cout << "tmp : " << tmp << endl;
		div *= B;
	}

	return 0;
}
