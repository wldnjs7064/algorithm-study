#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int n;
	cin >> n;
	deque<int> dq;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "push_front")
		{
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if (str == "push_back")
		{
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (str == "size")
		{
			cout << dq.size() << "\n";
		}
		else if (str == "empty")
		{
			if (dq.size() == 0)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (str == "front")
		{
			if (dq.size() == 0)
				cout << "-1" << "\n";
			else
				cout << dq.front() << "\n";
		}
		else if (str == "back")
		{
			if (dq.size() == 0)
				cout << "-1" << "\n";
			else
				cout << dq.back() << "\n";
		}
		else if (str == "pop_front")
		{
			if (dq.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (str == "pop_back")
		{
			if (dq.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
	}
}