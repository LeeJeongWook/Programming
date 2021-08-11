#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

#define MAX 200

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    int K, idx = 0;
    char arr[MAX][MAX];
    string str;

    cin >> K >> str;

    for (int i = 0; i < str.size() / K; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < K; j++) {
                arr[i][j] = str[idx];
                idx++;
            }
        }
        else {
            idx += K;
            for (int j = 0; j < K; j++) {
                idx--;
                arr[i][j] = str[idx];
            }
            idx += K;
        }
    }

    for (int j = 0; j < K; j++) {
        for (int i = 0; i < str.size() / K; i++) {
            cout << arr[i][j];
        }
    }

    
    return 0;
}