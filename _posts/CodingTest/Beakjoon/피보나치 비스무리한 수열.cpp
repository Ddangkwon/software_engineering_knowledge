#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int n;
long long arr[117] = { 0, 1, 1, 1, };

void dp(long long * arr)
{

    for(int i = 4; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 3];
    }
    return;
}

int main(void)
{

    scanf("%d", &n);
    dp(arr);
    cout << arr[n] << '\n';

    return 0;
}
