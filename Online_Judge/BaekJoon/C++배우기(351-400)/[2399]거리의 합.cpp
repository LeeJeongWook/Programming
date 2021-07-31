#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <deque>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    int32_t N;
    int64_t sum = 0, dist;

    cin >> N;

    int32_t data[10001];

    for (int i = 0; i < N; i++) cin >> data[i];

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            dist = data[i] - data[j];
            if (dist < 0) dist *= -1;
            sum += dist;
        }
    }

    cout << sum * 2;

    return 0;
}

