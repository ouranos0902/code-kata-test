#include <string>
#include <vector>

using namespace std;

 int collatz(long long n, int count)
 {
    if(n==1) return count;
    if(count >= 500) return -1;
    return collatz((n%2==0) ? n/2 : n * 3 + 1, count + 1);
 }

int solution(int num) 
{
    return collatz(num, 0);
}