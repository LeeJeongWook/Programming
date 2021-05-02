#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int num, old, ans = 0;
	bool flag = false;
	char operate;
	
	cin >> ans;

	while (1) {
		if (flag == false) {
			cin >> operate;
			flag = true;
		}

		else if (flag == true) {
			if (operate == '=')
				break;
			cin >> num;
			
			if (operate == '+') {
				ans += num;
			}
			else if (operate == '-') {
				ans -= num;
			}
			else if (operate == '/') {
				ans /= num;
			}
			else if (operate == '*') {
				ans *= num;
			}
			flag = false;
		}
	}

	cout << ans;

	return 0;
}