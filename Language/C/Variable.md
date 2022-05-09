# 변수(Variable)

## auto 변수(Local)
해당 변수의 동작 범위는 자신이 선언된 함수 혹은 해당 block({})
해당 변수의 존속 기간은 정의 된 함수가 수행되는 동안이며 return 과 동시에 사라진다


## extern(Global)

Global 변수라고 불리는 변수로서, 변수가 함수 바깥쪽에서 정의된다
Global 변수의 존속 기간은 선언된 시점에서 파일 끝 전체에서 사용된다

또한 선언된 파일 뿐만아니라 다른 파일에서도 extern int var 과 같이 선언하면 다른 파일에서도 사용 가능하다

## static

static 변수는 크게 local static 과 global static 변수로 나뉜다.

예시를 들어 살펴보면,

### local static 

```C
void func()
{
    static int var = 0;

    var++;
    return;
}
```

### global static 
static int g_var = 0;
```C
void func()
{
    static int var = 0;
    g_var++;
    var++;
    return;
}
```

## volatile
