#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    int p,q,r,s,w;
    int a,b;
    int res;
    for (int i=0;i<n;i++)
    {
        cin>>p>>q>>r>>s>>w;
        a=w*p;
        if (w<r)
            b=q;
        else
            b=q+(w-r)*s;
        if (a<b)
            res=a;
        else
            res=b;
        cout<<"#"<<i+1<<" "<<res<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}