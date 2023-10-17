#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
     	int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        int si=a+c;
        int bun=b+d;
        if (si>12)
            si-=12;
        if (bun>60)
        {
         	si++;
            bun-=60;
        }
        cout<<"#"<<i+1<<" "<<si<<" "<<bun<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}