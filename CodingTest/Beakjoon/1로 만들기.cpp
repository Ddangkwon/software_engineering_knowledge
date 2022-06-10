#include <iostream>
#include <cstdio>

using namespace std;
int N;
int arr[1000001] = { 0, 0, 1, 1, };

void dp(int * arr)
{
    for(int i = 4; i <= N; i++)
    {
        //먼저 1을 빼는 연산을 최솟값으로 설정
        arr[i] = arr[i - 1] +1;
        // 3으로 나누는 연산과 1을 빼는 연산 간 크기 비교
        if(i % 3 == 0)
        {
            arr[i] = min(arr[i], arr[i/3] + 1);
        }
        // 2으로 나누는 연산과 1을 빼는 연산 간 크기 비교
        if(i % 2 == 0)
        {
            arr[i] = min(arr[i], arr[i/2] + 1);
        }
    }
    cout << arr[N] << '\n';
}

int main(void)
{
    scanf("%d", &N);
    dp(arr);

    return 0;
}
