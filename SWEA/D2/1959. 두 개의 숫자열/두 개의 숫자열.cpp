#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    int a1[20];
    int a2[20];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int max = -99999999;
        for (int j = 0; j < a; j++)
            cin >> a1[j];
        for (int j = 0; j < b; j++)
            cin >> a2[j];
        if (b > a)
        {
            for (int num=0;num<b-a+1;num++)
            {
                int sum = 0;
                for (int j = 0; j < a; j++)
                {
                    sum += a1[j] * a2[j+num];
                }
                if (sum > max) max = sum;
            }
        }
        else
        {
            for (int num = 0; num < a-b + 1; num++)
            {
                int sum = 0;
                for (int j = 0; j < b; j++)
                {
                    sum += a1[j+num] * a2[j];
                }
                if (sum > max) max = sum;
            }
        }
        cout << "#" << i + 1 << " " << max << "\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}