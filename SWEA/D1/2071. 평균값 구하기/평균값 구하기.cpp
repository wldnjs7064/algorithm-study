#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int n,a;
    cin>>n;
    for (int i=0;i<n;i++)
    {
         int sum=0;
     	for (int j=0;j<10;j++)
        {
            cin>>a;
            sum+=a;
        }
        double res=sum/10.0;
        cout<<"#"<<i+1<<" "<<round(res)<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}