#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <deque>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    int n, tmp, ans = 0;
    deque<int> dq;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        dq.push_back(tmp);
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            ans += abs(dq.front() - dq[j]);
        }
        dq.push_back(dq.front());
        dq.pop_front();
    }

    cout << ans;

    return 0;
}

