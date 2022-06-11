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

위의 두 예시의 static 변수들은 공통적으로 존속기간이 선언된 파일 전체이며 다른 파일에서 extern으로 가져갈 수 없다
프로젝트에서 주로 해당 파일에서만 사용하는 지역 전역변수로 사용을 하며 C++의 protect와 같은 원리로 사용한다
## volatile

volatile 변수의 경우 컴파일러의 최적화 옵션으로 인해 불필요한 동작을 생략하고 넘어가는 경우를 방지한다
선언한 변수는 최적화에서 제외되며 주로 임베디드 환경의 Hardware Interrupt 등을 통해 변수가 외부적 요인으로 변경될 경우 많이 사용한다