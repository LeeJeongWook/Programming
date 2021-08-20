#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int idx = 0;
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    while (1) {
        if (participant[idx] != completion[idx]) {
            answer = participant[idx];
            break;
        }
        idx++;
    }

    return answer;
}