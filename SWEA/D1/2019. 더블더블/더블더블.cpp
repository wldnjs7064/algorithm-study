#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    cout<<1<<" ";
    for (int i=1;i<=n;i++){
    	cout<<pow(2,i)<<" ";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}