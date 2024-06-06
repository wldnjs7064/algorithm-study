#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	queue<int> q;
	vector<int> v;
	int n,k;
	cin >> n>>k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}
	
	cout << "<" << v[0];

	for (int i = 1; i < v.size(); i++){
		cout << ", " << v[i];
	}
	cout << ">";

}