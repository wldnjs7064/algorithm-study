#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    if (n%slice==0)
        return answer=n/slice;
    else
        return answer=n/slice+1;
}