#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ranking[7] = { 6, 6, 5, 4, 3, 2, 1 };

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero = 0, correct = 0;
    sort(lottos.begin(), lottos.end());

    for (int i = 0; i < lottos.size(); i++) {
        if (lottos[i] == 0) {
            zero++;
            continue;
        }
        for (int j = 0; j < win_nums.size(); j++) {
            if (lottos[i] == win_nums[j]) {
                correct++;
                win_nums.erase(win_nums.begin() + j);
                break;
            }
        }
    }

    answer.push_back(ranking[correct + zero]);
    answer.push_back(ranking[correct]);

    return answer;
}