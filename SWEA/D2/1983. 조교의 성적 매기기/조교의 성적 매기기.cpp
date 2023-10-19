#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    string score[]={"A+","A0","A-","B+","B0","B-","C+","C0","C-","D0"};
	int test_case;
	int T;
	cin>>T;
	
    int mid, fin, ass;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int n,k;
        int result=0;
        double total[100];
        cin>>n>>k;
        for (int i=0;i<n;i++)
        {
			cin>>mid>>fin>>ass;
            total[i]=0.35*mid+0.45*fin+ass*0.2;
        }
         for (int i = 0; i<n; i++){
            if (total[i] > total[k - 1])
                result++;
        }
        cout<<"#"<<test_case<<" "<<score[result/(n/10)]<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}