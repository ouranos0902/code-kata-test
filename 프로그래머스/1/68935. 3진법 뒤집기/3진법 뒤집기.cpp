#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    string base3 = "";
    int result = 0;
    int power = 1;
    while(n >0)
    {
        base3 += to_string(n%3);
        n/=3;
    }
    for(int i = base3.size()-1; i>=0; i--)
    {
        result += (base3[i] - '0') * power;
        power *=3;
    }
    return result;
     
}