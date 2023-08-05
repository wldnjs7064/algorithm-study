// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int cnt=0,max=0;
    vector<long long> v;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long int card=v[0];
    for (int i=1;i<n;i++)
    {
        if (v[i]==v[i-1])
            cnt++;
        else
            cnt=0;
        if (cnt>max)
        {
            max=cnt;
            card=v[i];
        }
    }
    cout<<card<<"\n";

    return 0;
}