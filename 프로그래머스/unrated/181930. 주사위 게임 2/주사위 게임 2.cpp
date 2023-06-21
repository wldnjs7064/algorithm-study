#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    if (a==b&&b==c)
        return (a*3*a*a*3*a*a*a*3);
    else if ((a==b&&b!=c)||(a!=b&&a==c)||(b==c&&a!=c))
        return ((a+b+c)*(a*a+b*b+c*c));
    else
        return (a+b+c);
}