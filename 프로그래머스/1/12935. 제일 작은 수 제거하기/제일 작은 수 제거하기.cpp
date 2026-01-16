#include <string>
#include <vector>
#include <algorithm>
#include<functional>

using namespace std;


vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
     if(arr.empty())
     {
         return vector<int>{-1};
     }
    int min = *min_element(arr.begin(), arr.end());
    
    arr.erase(remove(arr.begin(), arr.end(), min), arr.end());
    
    if(arr.empty()) return vector<int>{-1};
    

    return arr;
}