#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int a = 0;
    int b = 0;
    for(auto &card : sizes)
    {
        int w = max(card[0], card[1]);
        int h = min(card[0], card[1]);
        a = max(a, w);
        b = max(b, h);  
    }
    return a*b;
}
