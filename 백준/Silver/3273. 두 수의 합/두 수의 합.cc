#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    ios::sync_with_stdio(0);
    cin.tie();
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int x;
    cin >> x;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1, cnt = 0;
    while (1)
    {
        if (l >= r)
            break;
        int sum = v[l] + v[r];
        if (sum == x)
        {
            l++;
            r--;
            cnt++;
        }
        else if (sum < x)
            l++;
        else
            r--;
    }
    cout << cnt;
}
