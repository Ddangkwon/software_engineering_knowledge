# 배열(Array)


```
배열 초기화

memset 함수
=> memset 함수의 경우 memory.h, string.h 둘 중 하나의 헤더 파일을 include 하여 사용한다
```C
void* memset(void* ptr, int value, size_t num);

//void* ptr : 값을 초기화하고자하는 영역의 시작 주소
//int value : 초기화 하고자 하는 값
//size_t num : 데이터 길이
```

1차원 배열 초기화

```C

#include<string.h>
#include<stdio.h>
 
int main(void)
{
    int arr[5];

    memset(arr, 1, sizeof(arr));
 
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", *(arr + i));
    }
    
    return 0;
}
 

```

2차원 배열 초기화

```C

#include<string.h>
#include<stdio.h>
 
int main(void)
{
    int arr[4][5];

    memset(arr, 1, sizeof(int) * 4 * sizeof(arr[0]));
 
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", *(arr + i));
    }
    
    return 0;
}
 

```
```