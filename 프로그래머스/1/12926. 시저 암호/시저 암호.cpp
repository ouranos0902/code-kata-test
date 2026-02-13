#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer;
    answer.reserve(s.size());

    for (char ch : s) 
    {
        if (ch == ' ') 
        {
            answer += ' ';
        } 
        else if (isupper(ch)) 
        {
            int shifted = ( (ch - 'A') + n ) % 26;
            answer += (char)(shifted + 'A');
        } 
        else if (islower(ch)) 
        {
            int shifted = ( (ch - 'a') + n ) % 26;
            answer += (char)(shifted + 'a');
        }
    }
    return answer;
}
