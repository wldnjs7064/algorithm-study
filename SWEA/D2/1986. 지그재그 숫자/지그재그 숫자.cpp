#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
		int a;
        cin>>a;
        int sum=0;
        for (int j=1;j<=a;j++)
        {
			if (j%2==0)
                sum-=j;
            else
                sum+=j;
        }
        cout<<"#"<<i+1<<" "<<sum<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}