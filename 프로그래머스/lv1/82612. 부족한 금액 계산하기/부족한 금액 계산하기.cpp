#include <cmath>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long need=0;
    for (int i=1;i<=count;i++)
    {
        need+=price*i;
    }
    answer=money-need;
    if (answer>=0)
        answer=0;
    else
        answer=abs(answer);
    return answer;
}