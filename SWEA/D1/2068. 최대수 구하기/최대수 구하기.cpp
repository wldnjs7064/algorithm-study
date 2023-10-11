#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        vector<int> v;
     	for (int j=0;j<10;j++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
         int max=*max_element(v.begin(),v.end());
        cout<<"#"<<i+1<<" "<<max<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}