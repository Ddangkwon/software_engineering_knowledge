#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, x = 0;
    
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 1)
        {
            x = i;
            break;
        }
    }
    answer = x;
    return answer;
}