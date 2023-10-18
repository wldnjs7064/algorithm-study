#include<iostream>

using namespace std;
 int a[9][9];
int check()
{
	for (int i=0;i<9;i++)
    {
        int sum1=0;
        int sum2=0;
		for (int j=0;j<9;j++)
        {
            sum1+=a[i][j];
            sum2+=a[j][i];
        }
        if (sum1!=45) return 0;
        if (sum2!=45) return 0;
    }
    
    for (int i=0;i<3;i++)
    {
		for (int j=0;j<3;j++)
        {
            int sum=0;
            for (int k=0;k<3;k++)
            {
				for (int l=0;l<3;l++)
                    sum+=a[i*3+k][j*3+l];
            }
            if (sum!=45) return 0;
        }
    }
	return 1;
}
int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
     	for (int j=0;j<9;j++)
        {
            for (int k=0;k<9;k++)
                cin>>a[j][k];
        }
        cout<<"#"<<i+1<<" "<<check()<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}