#include <string>
#include <vector>

using namespace std;

string solution(string a) {
 for(int i = 0; i<a.size()-4; i++)
 {
     a[i] = '*';
 }
    return a;
}
