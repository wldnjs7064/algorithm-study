#include<iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
    {
        string str,tmp;
        cin>>str;
        cout<<"#"<<test_case<<" ";
        tmp=str;
        reverse(tmp.begin(),tmp.end());
        if (tmp==str)
            cout<<1<<"\n";
        else
            cout<<0<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}