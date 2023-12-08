#include <iostream>
using namespace std;

int tree[26][2]; //트리 저장 배열

void pre(int x)
{
	//전위: 루트->왼->오
	if (x < 0) return;
	cout << char(x + 65); //루트
	pre(tree[x][0]); //왼
	pre(tree[x][1]); //오

	return;
}
void mid(int x)
{
	if (x < 0) return;
	mid(tree[x][0]); //왼
	cout << char(x + 65); //루트
	mid(tree[x][1]); //오

	return;
}
void post(int x)
{
	if (x < 0) return;
	post(tree[x][0]); //왼
	post(tree[x][1]); //오
	cout << char(x + 65); //루트

	return;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char a, b, c;
		cin >> a >> b >> c;
		tree[a - 65][0] = b - 65; //왼쪽 자식
		tree[a - 65][1] = c - 65; //오른쪽 자식
	}
	pre(0);
	cout << "\n";
	mid(0);
	cout << "\n";
	post(0);
	cout << "\n";
}
