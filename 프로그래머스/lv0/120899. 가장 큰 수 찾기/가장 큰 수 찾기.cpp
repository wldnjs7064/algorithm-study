#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    answer.push_back(*max_element(array.begin(),array.end())); 
    answer.push_back(max_element(array.begin(),array.end())-array.begin());
    return answer;
}