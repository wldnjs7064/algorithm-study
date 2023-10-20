#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int n,cnt=0;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        for (int i=0;i<n;i++)
        {
			if (s1[i]==s2[i])
                cnt++;
        }
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}