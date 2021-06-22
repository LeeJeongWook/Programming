#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    int N, K = 1, cnt = 0;

    cin >> N;

    while(N != 0){
        if(N < K)
            K = 1;
        N -= K;
        K++;
        cnt++;
    }
    
    cout << cnt;

    return 0;
}