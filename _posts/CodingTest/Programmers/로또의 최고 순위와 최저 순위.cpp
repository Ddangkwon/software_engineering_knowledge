#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int max_win = 0, min_win = 0;
    int answer_max = 0, answer_min = 0;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    for(int i = lottos.size() - 1; i >= 0 ; i--)
    {
       for(int j = lottos.size() - 1; j >= 0 ; j--)
        {
            if(lottos[i] == win_nums[j])
            {
                max_win++;
                min_win++;
                break;
            }
        } 
    }
    for(int i = 0; i < lottos.size() ; i++)
    {
        if(lottos[i] == 0)
        {
            max_win++;
        }
    }
    switch(max_win)
    {
        case 1:
            answer_max = 6;
            break;
        case 2:
            answer_max = 5;
            break;
        case 3:
            answer_max = 4;
            break;
        case 4:
            answer_max = 3;
            break;
        case 5:
            answer_max = 2;
            break;
        case 6:
            answer_max = 1;
            break;
        default:
            answer_max = 6;
    }
    switch(min_win)
    {
        case 1:
            answer_min = 6;
            break;
        case 2:
            answer_min = 5;
            break;
        case 3:
            answer_min = 4;
            break;
        case 4:
            answer_min = 3;
            break;
        case 5:
            answer_min = 2;
            break;
        case 6:
            answer_min = 1;
            break;
        default:
            answer_min = 6;
    }
    answer.push_back(answer_max);
    answer.push_back(answer_min);
    return answer;
}