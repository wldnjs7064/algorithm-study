#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if (num_list.size()>=11)
    {
        int sum=0;
        for (int i:num_list)
            sum+=i;
        return sum;
    }
    else
    {
        int product=1;
        for (int i:num_list)
            product*=i;
        return product;
    }
    return answer;
}