#include <iostream>
#include <string>
#include <deque>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string com;
        int n;
        string arr;
        cin >> com >> n >> arr;

        deque<int> dq;
        string num;
        for (int i = 1; i < arr.size(); ++i) {
            if (isdigit(arr[i])) {
                num += arr[i];
            }
            else if (arr[i] == ',' || arr[i] == ']') {
                if (!num.empty()) {
                    dq.push_back(stoi(num));
                    num.clear();
                }
            }
        }

        bool isReverse = false;
        bool error = false;

        for (char c : com) {
            if (c == 'R') {
                isReverse = !isReverse;
            }
            else if (c == 'D') {
                if (dq.empty()) {
                    error = true;
                    break;
                }
                if (isReverse) {
                    dq.pop_back();
                }
                else {
                    dq.pop_front();
                }
            }
        }

        if (error) {
            cout << "error\n";
        }
        else {
            cout << "[";
            if (isReverse) {
                for (auto it = dq.rbegin(); it != dq.rend(); ++it) {
                    if (it != dq.rbegin()) cout << ",";
                    cout << *it;
                }
            }
            else {
                for (auto it = dq.begin(); it != dq.end(); ++it) {
                    if (it != dq.begin()) cout << ",";
                    cout << *it;
                }
            }
            cout << "]\n";
        }
    }
}
