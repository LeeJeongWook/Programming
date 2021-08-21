#include <string>
#include <vector>

#include <iostream>

using namespace std;

int solution(string s) {
    string tmp;
    int answer = 0, idx = -1;

    for (int i = 0; i < s.size(); i++) {
        if ((48 <= (int)s[i]) && ((int)s[i] <= 57)) {
            //cout << s[i];
            if (idx != -1) {
                tmp = s.substr(idx, i - idx);
                cout << tmp;
                idx = -1;
            }
            cout << s[i];
        }
        else if (idx == -1) {
            idx = i;
            cout << "idx: " << idx << endl;
        }
    }

    return answer;
}