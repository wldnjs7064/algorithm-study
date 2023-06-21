#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(),sides.end());
    int max=sides[2];
    if (max<(sides[0]+sides[1]))
        return 1;
    else
        return 2;
}