#include <iostream>
#include <regex>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	s = regex_replace(s, regex("XXXX"), "AAAA");
	s = regex_replace(s, regex("XX"), "BB");

	if (s.find("X")!=-1 )
		cout << "-1";
	else
		cout << s;
}