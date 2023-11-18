#include <iostream>
using namespace std;

long long power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    for (int test_case = 1; test_case <= 10; test_case++) {
        int t, a, b;
        cin >> t >> a >> b;
        cout << "#" << t << " " << power(a, b) << "\n";
    }

    return 0;
}
