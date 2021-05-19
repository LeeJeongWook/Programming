#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

    string s;
    int N;

    cin >> s >> N;

    vector<string> v(N);

    int result = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];

        bool ring = false;

        for (int j = 0; j < v[i].length(); j++)

            if (v[i][j] == s[0]) {

                bool flag = true;

                for (int k = 0; k < s.length(); k++)
                    if (v[i][(j + k) % v[i].length()] != s[k]) {
                        flag = false;
                        break;
                    }

                if (flag) {
                    ring = true;
                    break;
                }
            }
        if (ring)
            result++;
    }

    cout << result;

    return 0;

}
