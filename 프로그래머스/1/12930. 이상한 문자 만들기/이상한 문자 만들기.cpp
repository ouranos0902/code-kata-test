#include <string>
#include <vector>

using namespace std;

string solution(string s) {
   string answer = "";
    int number = 0;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i]== ' ')
        {
            number = 0;
            continue;
        }
            else
            {
                if(number % 2 == 0)
                {
                    s[i] =toupper(s[i]);
                }
                else
                {
                    s[i]= tolower(s[i]);
                }
            }
        number++;
    }
    return s;
}