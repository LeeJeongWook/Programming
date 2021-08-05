#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    int N, a, b, c, rank = 0;
    int rankList[3] = { 0, };
    
    vector<pair<int, pair<int, int>>> v;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a >> b >> c;
        v.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(v.begin(), v.end(), greater<pair<int, pair<int, int>>>());

    for (int i = 0; i < v.size(); i++) {
        rankList[rank] = v[i].second.first;
        if ( (rank < 3) && !( (rankList[0] == rankList[1]) && (rankList[1] == rankList[2]) ) ) {
            cout << v[i].second.first << ' ' << v[i].second.second << '\n';
            rank++;
        }
    }

    return 0;
}

