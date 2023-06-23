#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    vector<int> v;
    for (int i=1;i<=n;i++)
    {
        if (n%i==1)
            v.push_back(i);
    }
    int answer=*min_element(v.begin(),v.end());
    return answer;
}