#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 팩토리얼 예제
// loop VS recursion

long loop_factorial(int n); // 팩토리얼 구현을 위해 반복문을 사용하는 함수
long recursive_factorial(int n); // 팩토리얼 구현을 위해 재귀호출을 이용하는 함수

int main()
{
	int num = 5;

	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));

	return 0;
}

long loop_factorial(int n)
{
	long asw = 1;

	for (int i = 1; i <= n; n--)
	{
		asw *= n;
	}

	return asw;
}

long recursive_factorial(int n)
{
	if (n > 0)
	{
		return	n *= recursive_factorial(n - 1); // 이렇게 return 앞에서 recursive call을 하는 것을 tail(end) recursion이라고 한다.
	}
	else
		return 1;
}