#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int hab=0;
    int init=x;
    while (x!=0)
    {
        hab=hab+x%10;
        x=x/10;
    }
    if (init%hab!=0)
        answer=false;
    return answer;
}