#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.rbegin(),s.rend());
    for (int i=0;i<s.length();i++)
        answer.push_back(s[i]);
    return answer;
}