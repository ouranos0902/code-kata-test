#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    vector<int> answer;
    
        while ( n > 0){
        answer.push_back(n%10);
        n/=10;
    }
    sort(answer.begin(),answer.end(), [] (int a, int b) {
        return a> b;
    });
    
    long long result = 0;
    for (int a : answer) {
        result = result * 10 + a;
    }
    return result;
}