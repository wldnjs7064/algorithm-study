#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt[26]={0};

    for (int i=0;i<s.length();i++)
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            cnt[s[i]-97]++;
        }
    }
    for (int i=0;i<26;i++)
        cout << cnt[i]<< " ";
}