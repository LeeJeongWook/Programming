#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

    int A, B;
    set<int> s;

    cin >> A >> B;

    for (int i = 0; i < A; i++) {
        int num;
        cin >> num;
        s.insert(num);
    }


    for (int i = 0; i < B; i++) {
        int num;

        cin >> num;

        auto it = s.find(num);

        if (it == s.end())
            continue;
        else
            s.erase(it);
    }

    cout << s.size() << "\n";

    for (auto num : s)
        cout << num << " ";

    return 0;

}