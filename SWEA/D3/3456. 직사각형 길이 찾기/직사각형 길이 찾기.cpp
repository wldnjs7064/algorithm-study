#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int a,b,c,res;
        cin>>a>>b>>c;
        
        if (a==b&&a!=c)
            res=c;
        else if (a==c&&a!=b)
            res=b;
        else
            res=a;
        cout<<"#"<<test_case<<" "<<res<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}