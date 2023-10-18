#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
     	string str, tmp;
        int cnt=0;
        cin>>str;
        tmp.push_back(str[0]);
        for (int j=1;j<str.size();j++)
        {
            if (tmp!=str.substr(tmp.size(),j))
            	tmp.push_back(str[j]);
            else
                break;
        }
        cout<<"#"<<i+1<<" "<<tmp.size()<<"\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}