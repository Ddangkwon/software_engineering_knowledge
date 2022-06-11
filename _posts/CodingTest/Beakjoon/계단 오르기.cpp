#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int number;
int score[301] = { 0 };
int answer[301] = { 0 };
void dp(int *arr)
{
    answer[0] = arr[0];
    answer[1] = arr[0] + arr[1];
    answer[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
    for(int i = 3; i < number; i++)
    {
        answer[i] =  max(answer[i - 2] + arr[i],answer[i - 3] + arr[i - 1] + arr[i]);
    }
}
int main(void)
{
    
    scanf("%d", &number);
    for(int i = 0; i < number; i++)
    {
        scanf("%d", &score[i]);
    }
    dp(score);
    printf("%d", answer[number - 1]);
    return 0;
}