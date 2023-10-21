#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case,a;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string str,res;
        cin>>str;
       	char lastChar = str.back();
		a = lastChar - '0';
        if (a%2==0)
            res="Even";
        else
            res="Odd";
        cout<<"#"<<test_case<<" "<<res<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}