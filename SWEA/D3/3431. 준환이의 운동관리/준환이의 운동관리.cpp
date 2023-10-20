#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int l,u,x,res;
        cin>>l>>u>>x;
        if (x<l)
            res=l-x;
        else
        {
            if (x<u)
                res=0;
            else
                res=-1;
        }
        cout<<"#"<<test_case<<" "<<res<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}