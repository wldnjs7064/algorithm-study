#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    string s = to_string(order);
    int answer = 0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='3'||s[i]=='6'||s[i]=='9')
            answer++;
    }
    return answer;
}