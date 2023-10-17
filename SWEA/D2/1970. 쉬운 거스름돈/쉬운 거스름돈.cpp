#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a[8]={50000,10000,5000,1000,500,100,50,10};
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
     	int m;
        cin>>m;
        cout<<"#"<<i+1<<"\n";
        for (int j=0;j<8;j++)
        {
         	cout<< m/a[j]<<" ";
            m%=a[j];
        }
        cout<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}