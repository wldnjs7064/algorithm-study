#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    unsigned long long answer;
    int cnt=0;
    for (int i=0;i<t.size()-p.size()+1;i++)
    {
        
            answer=stoll(t.substr(i,p.size()));
            if (answer<=stoll(p))
                cnt++;
        
    }
    return cnt;
}