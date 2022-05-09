# 콜백(CallBack)

본인이 선언하고 사용할 함수가 명시적으로 호출되지 않고 함수 포인터에 의해 호출되는 암시적 호출을 콜백(Callback)이라고 한다
그리고 그렇게 암시적으로 호출되는 함수를 콜백 함수라고 한다

윈도우 프로그래밍에서는 대표적으로 WndProc()이라는 콜백 함수가 존재한다.
이러한 함수는 OS에서 나중에 나올 기능들에 대해 공간을 남겨놓는 것으로 활용기 가능하다
함수 포인터는 대상이 실재하지 않더라도 비워두고 프로그래밍을 할 수 있다



## 예제(연산 함수의 확장)

```C
int abs_func(int x)
{
    if(x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}
int add(int x, int y, int (*fp_a)(int), int (*fp_b)(int))
{
    if(fp_a != NULL){
        x = fp_a(x);
    }
    if(fp_b != NULL){
        y = fp_b(y);
    }
    return x + y;
}

int sub(int x, int y, int (*fp_a)(int), int (*fp_b)(int))
{
    if(fp_a != NULL){
        x = fp_a(x);
    }
    if(fp_b != NULL){
        y = fp_b(y);
    }
    return x - y;
}


int main()
{
    /* 함수 호출 */

    add(3, 5, NULL, NULL);
    sub(3, -5, NULL, abs_func);
    return 0;
}

```

또다른 예시로 Event Handler를 등록하고 Event 발생시 Handler를 호출하는 예를 확인해보면,
```C



```