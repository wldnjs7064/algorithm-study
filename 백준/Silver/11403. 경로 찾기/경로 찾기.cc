#include <iostream>
#include <algorithm>
#define INF 1e9

using namespace std;

int n;
int graph[101][101];

int main(void) {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> graph[i][j];
		}
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (graph[i][k] && graph[k][j]) { 
					graph[i][j] = 1;
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << graph[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
