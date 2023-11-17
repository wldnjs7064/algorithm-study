#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    t = 10;

    for (int test_case = 0; test_case < t; test_case++)
    {
        int n, res = 0;
        cin >> n;

        int building[1000];
        for (int i = 0; i < n; i++)
            cin >> building[i];

        for (int i = 2; i < n - 2; i++)
        {
            int maxHeight = max(max(building[i - 2], building[i - 1]), max(building[i + 1], building[i + 2]));
            if (maxHeight < building[i])
                res += building[i] - maxHeight;
        }

        cout << "#" << test_case + 1 << " " << res << "\n";
    }

    return 0;
}
