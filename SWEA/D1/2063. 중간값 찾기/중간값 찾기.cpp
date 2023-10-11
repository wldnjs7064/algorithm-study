#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }   
    sort(v.begin(),v.end());
    cout<<v[v.size()/2];   
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}