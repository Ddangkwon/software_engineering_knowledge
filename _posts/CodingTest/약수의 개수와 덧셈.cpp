#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0, div_num_cnt = 0;
    for(int i = left; i <=right; i++)
    {
        div_num_cnt = 1;
        for(int j = 2; j <= i; j++)
        {
            if(i % j == 0)
            {
                div_num_cnt++;
            }
        }
        if((div_num_cnt & 1) == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    return answer;
}