#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int flag = 10;
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++) {
        if (flag != arr[i]) {
            flag = arr[i];
            answer.push_back(arr[i]);
        }
    }

    return answer;
}