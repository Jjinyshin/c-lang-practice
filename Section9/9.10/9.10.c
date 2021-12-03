#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 피보나치 수열 예제

int fibonacci(int number);

int main()
{
	for (int count = 1; count < 13; ++count)
		printf("%d ", fibonacci(count));

	return 0;
}

int fibonacci(int number)
{
	/*
	if (number == 1 || number == 2)
		return number = 1;
	else
		return fibonacci(number - 2) + fibonacci(number - 1);
	*/
	if (number > 2)
		return fibonacci(number - 1) + fibonacci(number - 2); // double recursion
	else
		return 1;
}

/* Note
재귀호출의 장점: 구현을 간단하게 할 수 있다.
단점: 메모리 사용량이 많고(비효율적으로 사용됨 memory inefficiency) 계산에 중복이 생긴다(redundant computation).
*/