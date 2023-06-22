#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int final=num_list.back();
    int second = num_list[num_list.size()-2];
    if (final>second)
        num_list.push_back(final-second);
    else
        num_list.push_back(final*2);
    return num_list;
}