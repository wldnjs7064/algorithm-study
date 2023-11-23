#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double num[20];
	string grade;
	double score[20];
	double sum = 0, gob = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> name >> num[i] >> grade;
		if (grade == "A+") score[i] = 4.5;
		else if (grade == "A0") score[i] = 4.0;
		else if (grade == "B+") score[i] = 3.5;
		else if (grade == "B0") score[i] = 3.0;
		else if (grade == "C+") score[i] = 2.5;
		else if (grade == "C0") score[i] = 2.0;
		else if (grade == "D+") score[i] = 1.5;
		else if (grade == "D0") score[i] = 1.0;
		else if (grade == "F") score[i] = 0.0;
		else if (grade == "P")
		{
			score[i] = 0.0;
			num[i] = 0.0;
		}
		gob+=score[i] * num[i];
		sum += num[i];
	}
	cout << fixed;
	cout.precision(6);
	cout << gob / sum;
}