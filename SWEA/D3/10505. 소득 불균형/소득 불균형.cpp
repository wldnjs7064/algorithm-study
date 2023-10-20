#include<iostream>

using namespace std;

int a[10001];
int main(int argc, char** argv)
{
    int test_case;
    int T;

    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int n, sum = 0, avg, cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        avg = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (avg >= a[i])
                cnt++;
        }
        cout << "#" << test_case << " " << cnt << "\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}