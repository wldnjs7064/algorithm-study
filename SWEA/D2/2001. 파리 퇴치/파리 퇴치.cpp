#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
     	int n,m;
        cin>>n>>m;
        int ans=0;
        int a[15][15];
        for (int j=0;j<n;j++)
        {
			for (int k=0;k<n;k++)
                cin>>a[j][k];
        }
        for (int si=0;si<n-m+1;si++)
        {
			for (int sj=0;sj<n-m+1;sj++)
            {
                int cnt=0;
                for (int b=si;b<si+m;b++)
                {
                    for (int c=sj;c<sj+m;c++)
                    {
                        cnt+=a[b][c];
                    }
                }
                if(ans < cnt)
                    ans = cnt;
            }
        }
        cout<< "#"<<i+1<<" "<<ans<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}