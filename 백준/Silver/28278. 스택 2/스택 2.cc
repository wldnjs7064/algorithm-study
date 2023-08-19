/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    stack<int> st;
    for (int i=0;i<n;i++)
    {
        int cmd;
        cin>>cmd;
        if (cmd==1)
        {
            int x;
            cin>>x;
            st.push(x);
        }
        else if (cmd==3)
        {
            cout<<st.size()<<"\n";
        }
        else if (cmd==4)
        {
            if (st.size()==0)
                cout<<1<<"\n";
            else
                cout<<0<<"\n";
        }
        else if (cmd==2)
        {
            if (st.size()==0)
                cout<<-1<<"\n";
            else
            {
                cout<<st.top()<<"\n";
		st.pop();
            }
            
        }
	    else
	    {
		    if (st.size()==0)
                 cout<<-1<<"\n";
            else
                cout<<st.top()<<"\n";
	    }    
    }

    return 0;
}
