#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int gob=1;
    int hab=0;
    for (int i=0;i<num_list.size();i++)
    {
        gob*=num_list[i];
        hab+=num_list[i];
    }
    if (gob<hab*hab)
        return 1;
    else
        return 0;
}