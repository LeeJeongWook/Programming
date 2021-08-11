#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    long long N, F, ans = 0;

    cin >> N >> F;

    N = (N / 100) * 100;

    for (int i = 0; i < 100; i++) {
        if (N % F == 0)
            break;
        N++;
        ans++;
    }

    cout.width(2);
    cout.fill('0');
    cout << ans;

    return 0;
}