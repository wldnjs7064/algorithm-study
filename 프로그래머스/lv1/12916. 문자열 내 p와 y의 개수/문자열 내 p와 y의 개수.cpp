#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pcnt=0,ycnt=0;
    bool answer = true;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='p'||s[i]=='P')
            pcnt++;
        if (s[i]=='y'||s[i]=='Y')
            ycnt++;
    }
    
    if (pcnt==ycnt)
        answer=true;
    else
        answer=false;
   
    return answer;
}