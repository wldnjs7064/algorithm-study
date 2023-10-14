#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++)
    {
        int sum=0;
        double res;
        v.clear();
     	for (int j=0;j<10;j++)
        {
         	int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for (int j=1;j<=8;j++)
        {
         	 sum+=v[j];
        }
        res = double(sum)/8;
        cout<<"#"<<i+1<<" "<<round(res)<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}