#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <queue>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    int N, K;
    queue<int> q;

    cin >> N >> K;
    
    for (int i = 1; i <= N; i++) q.push(i);
    
    cout << '<';
    while (q.size()) {
        if (q.size() == 1) {
            cout << q.front() << '>';
            break;
        }
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
        
    return 0;
}