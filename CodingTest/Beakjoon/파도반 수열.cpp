#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int T, N;
int max_num = 0;
long long arr[101] = { 0, 1, 1, };


int main(void)
{

    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        if(N < 3)
        {

        }
        else if(arr[N] == 0)
        {
            for (int i = 3; i <= N; i++) {
                arr[i] = arr[i - 2] + arr[i - 3];
            }
        }
        cout << arr[N] << endl;
    }

    return 0;
}