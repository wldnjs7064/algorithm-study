#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for (int i=0;i<myString.length();i++)
    {
        if (myString[i]>='A'&&myString[i]<='Z')
            myString[i]=myString[i]+32;
    }
    return myString;
}