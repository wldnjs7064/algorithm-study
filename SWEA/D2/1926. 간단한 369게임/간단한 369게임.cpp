#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
     	int num=i;
        int cnt=0;
        while (num>0)
        {
        	if (num%10==3||num%10==6||num%10==9)
                cnt++;
            num/=10;
        }
        if (cnt==0)
            cout<<i<<" ";
        else
        {
         	   for (int j=0;j<cnt;j++)
               {
                	cout<<"-";   
               }
            cout<<" ";
        }
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}