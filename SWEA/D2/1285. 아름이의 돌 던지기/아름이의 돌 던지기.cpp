#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
		int n;
        cin>>n;
        vector<int> v;
        for (int j=0;j<n;j++)
        {
         	int loca;
            cin>>loca;
           	v.push_back(abs(loca));
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for (int j=0;j<v.size();j++)
        {
         	if (v[0]==v[j])
                cnt++;
        }
        cout<<"#"<<i+1<<" "<<v[0]<<" "<<cnt<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}