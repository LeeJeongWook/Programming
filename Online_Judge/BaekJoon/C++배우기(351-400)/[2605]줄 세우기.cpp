#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <queue>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    int arr[100] = { 0, }, T, n, idx;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> n;
        idx = i - n;
        if (arr[idx] != 0) {
            if (i == 1) arr[1] = arr[0];
            else {
                for (int j = i; j >= idx; j--) {
                    arr[j] = arr[j - 1];
                }
            }
            arr[idx] = i + 1;
        }
        else
            arr[idx] = i + 1;

    }
    for (int i = 0; i < T; i++) {
        cout << arr[i] << " ";
    }

        
    return 0;
}