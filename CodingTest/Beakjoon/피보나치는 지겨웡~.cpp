#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int n;
int arr[1000001] = { 1, 1, 3, };

void dp(int * arr)
{
    for(int i = 3; i <= n; i++)
    {
        arr[i] = (arr[i -1] + arr[i - 2] + 1) % 1000000007;
    }
    cout << arr[n] << '\n';
}

int main(void)
{
    scanf("%d", &n);
    dp(arr);

    return 0;
}
