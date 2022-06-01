#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w_max = 0, h_max = 0;
    for(int i = 0; i < sizes.size(); i++)
    {
        if(sizes[i][0] < sizes[i][1])
        {
            int tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
    }
    for(int i = 0; i < sizes.size(); i++)
    {
        w_max = max(sizes[i][0], w_max);
        h_max = max(sizes[i][1], h_max);
    }

    answer = w_max * h_max;
    return answer;
}