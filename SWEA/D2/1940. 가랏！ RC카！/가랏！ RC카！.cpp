#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
     	int t;
        cin>>t;
        int num, now_speed=0,speed,distance=0;
        for (int j=0;j<t;j++)
        {
            cin>>num;
            if (num==0) 
            { }
            else if (num==1)
            {
                cin>>speed;
             	now_speed+=speed;
            }
            else
            {
             	cin>>speed;
                now_speed-=speed;
                 if (now_speed < 0)
                    now_speed = 0;
            }
            distance+=now_speed;
        }
        cout<<"#"<<i+1<<" "<<distance<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}