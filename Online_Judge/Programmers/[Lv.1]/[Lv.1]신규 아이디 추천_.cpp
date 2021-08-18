#include <iostream>

#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";

    for (int i = 0; i < new_id.size(); i++) {
        //1단계
        new_id[i] = tolower(new_id[i]);

        //2단계
        if (!((97 <= (int)new_id[i]) && ((int)new_id[i] <= 122)) &&
            !((48 <= (int)new_id[i]) && ((int)new_id[i] <= 57)) &&
            (new_id[i] != '-') && (new_id[i] != '_') && (new_id[i] != '.')) {
            new_id.erase(new_id.begin() + i);
            i--;
            continue;
        }

        //3단계
        if ((new_id[i] == '.') && (new_id[i + 1] == '.')) {
            new_id.erase(new_id.begin() + i);
            i--;
            continue;
        }
    }


    //4단계
    while ((new_id[0] == '.') || (new_id[new_id.size() - 1] == '.')) {
        if (new_id[0] == '.') {
            new_id.erase(new_id.begin());
        }

        if (new_id[new_id.size() - 1] == '.') {
            new_id.erase(new_id.begin() + new_id.size() - 1);
        }
    }

    //5단계
    if (new_id.empty())
        new_id.push_back('a');

    //6단계
    if (16 <= new_id.size()) {
        new_id.erase(new_id.begin() + 15, new_id.end());
    }

    if (new_id[new_id.size() - 1] == '.') {
        new_id.erase(new_id.begin() + new_id.size() - 1);
    }

    //7단계
    while (new_id.size() <= 2) {
        new_id.push_back(new_id[new_id.size() - 1]);
    }

    answer = new_id;

    return answer;
}