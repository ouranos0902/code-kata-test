#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    int number = 0;
    for(int i = 0; i < seoul.size(); i++)
    {
        if(seoul[i] =="Kim")
        {
            number=i;
            break;
        }
    }
    return "김서방은 "+to_string(number)+"에 있다";
}