#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int value = x;
    int sum=0;
    
    while( x > 0 ) 
    {
        sum += x % 10;
        x /= 10;
    }
    return (value%sum==0 ? true: false);
   
}