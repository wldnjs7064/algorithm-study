#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        int x;
        cin >> s >> x;
        mp[s] += x;
    }
    bool ans = false;
    if (mp["BANANA"] == 5 || mp["STRAWBERRY"] == 5 || mp["LIME"] == 5 || mp["PLUM"] == 5)
        ans = true;
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
