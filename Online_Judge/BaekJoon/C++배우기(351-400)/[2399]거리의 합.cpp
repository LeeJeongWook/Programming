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
        for(int k = 0; k < n; k++){
            cout << dq[k] << " ";
        }
        cout << '\n';
        for(int j = 1; j < n; j++){
            ans += abs(dq.front() - dq[j]);
        }
        tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);
    }

    cout << ans;

    return 0;
}

