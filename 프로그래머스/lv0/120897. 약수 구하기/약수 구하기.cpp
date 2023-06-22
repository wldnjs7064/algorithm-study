#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
            answer.push_back(i);
    }
    sort(answer.begin(),answer.end());
    return answer;
}