#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n,max=0,maxd=0;
        cin>>n;
        vector<int> v;
        for (int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for (int i=1;i<n;i++)
        {
            int up,down;
            if (v[i-1]<v[i])
            {
                up=v[i]-v[i-1];
                if (max<up)
                    max=up;
            }
            else
            {
                down=v[i-1]-v[i];
                if(maxd<down)
                    maxd=down;
            }
        }
        cout<<"#"<<test_case<<" "<<max<<" "<<maxd<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}