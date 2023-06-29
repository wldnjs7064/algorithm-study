#include <string>
#include <vector>
#include <regex>
using namespace std;

string solution(int age) {
    string a=to_string(age);
    a=regex_replace(a,regex("0"),"a");
    a=regex_replace(a,regex("1"),"b");
    a=regex_replace(a,regex("2"),"c");
    a=regex_replace(a,regex("3"),"d");
    a=regex_replace(a,regex("4"),"e");
    a=regex_replace(a,regex("5"),"f");
    a=regex_replace(a,regex("6"),"g");
    a=regex_replace(a,regex("7"),"h");
    a=regex_replace(a,regex("8"),"i");
    a=regex_replace(a,regex("9"),"j");
    
    return a;
}