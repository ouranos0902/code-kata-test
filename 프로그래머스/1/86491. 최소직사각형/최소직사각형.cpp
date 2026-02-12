#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_w = 0;
    int min_h = 0;
    for(auto &card : sizes)
    {
        int w = max(card[0], card[1]);
        int h = min(card[0], card[1]);
        max_w = max(max_w, w);
        min_h = max(min_h, h);  
    }
    return max_w*min_h;
}