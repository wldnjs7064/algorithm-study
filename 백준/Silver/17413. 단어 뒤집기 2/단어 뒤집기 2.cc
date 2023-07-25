#include <iostream>
#include <stack>
#include <string>
using namespace std;

void stackprinter(stack<char> &s)
{
    while (!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
int main()
{
    string str;
    getline(cin,str);
    stack<char> s;
    for (int i=0;i<str.size();i++)
    {
        if (str[i]=='<')
        {
            stackprinter(s);
            while (1)
            {
                cout<<str[i];
                if (str[i]=='>')
                    break;
                i++;
            }
        }
        else if (str[i]==' ')
        {
            stackprinter(s);
            cout<<" ";
        }
        else
        {
            s.push(str[i]);
        }
    }
    stackprinter(s);
}