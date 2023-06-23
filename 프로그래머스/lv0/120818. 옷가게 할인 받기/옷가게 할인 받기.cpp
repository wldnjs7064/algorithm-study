#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if (price>=500000)
        answer=0.8*price;
    else if (price>=300000 && price<500000)
        answer=0.9*price;
    else if (price>=100000 && price<300000)
        answer=0.95*price;
    else
        answer=price;
    return answer;
}