#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int types[3]={5,3,1};
    for (int i=0;i<3;i++)
    {
        answer+=hp/types[i];
        hp=hp%types[i];
    }
    return answer;
}