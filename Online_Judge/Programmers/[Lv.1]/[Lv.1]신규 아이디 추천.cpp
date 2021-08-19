#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {

    //1�ܰ�
    for (int i = 0; i < new_id.size(); i++)
        new_id[i] = tolower(new_id[i]);

    //2�ܰ�
    for (int i = 0; i < new_id.size(); i++) {
        if (!((97 <= (int)new_id[i]) && ((int)new_id[i] <= 122)) &&
            !((48 <= (int)new_id[i]) && ((int)new_id[i] <= 57)) &&
            (new_id[i] != '-') && (new_id[i] != '_') && (new_id[i] != '.')) {
            new_id.erase(new_id.begin() + i);
            i--;
            continue;
        }
    }

    //3�ܰ�
    for (int i = 0; i < new_id.size(); i++) {
        if ((new_id[i] == '.') && (new_id[i + 1] == '.')) {
            new_id.erase(new_id.begin() + i);
            i--;
            continue;
        }
    }

    //4�ܰ�
    if (new_id.front() == '.') new_id.erase(new_id.begin());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);

    //5�ܰ�
    if (new_id.empty()) new_id.push_back('a');

    //6�ܰ�
    if (16 <= new_id.size()) new_id.erase(new_id.begin() + 15, new_id.end());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);

    //7�ܰ�
    while (new_id.size() <= 2) new_id.push_back(new_id.back());

    return new_id;
}