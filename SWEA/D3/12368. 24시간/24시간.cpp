#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int a,b,res;
        cin>>a>>b;
        if(a+b==24)
            res=0;
        else if (a+b>24)
            res=a+b-24;
        else
            res=a+b;
        cout<<"#"<<test_case<<" "<<res<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}