#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    for (int i=0;i<my_string.length();i++)
    {
        if (i==num1)
        {
            answer[0]=my_string[num1];
            my_string[num1]=my_string[num2];
        }
        else if (i==num2)
            my_string[num2]=answer[0];
    }
    return my_string;
}