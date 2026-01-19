#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    size_t len = s.size();
  if(len%2==1) 
  {
      size_t mid = len / 2;
      return s.substr(mid,1);
  }
    else
    {
        size_t mid = len / 2-1;
       return s.substr(mid,2);
    }
    
    return s;
}