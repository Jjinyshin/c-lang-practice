#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 변수의 영역과 지역변수(복습)

int a; // 이 file영역 전체에서 사용 가능한 변수

int int_max(int i, int j)
{
	int m;
	m = i > j ? i : j;
	return m;
}

int main()
{
	int a = 0; // 똑같은 이름의 변수 재선언 => 주소 바뀜, 영역이 다른 경우에는 이렇게 할 수 있다.
	m = 123; // m is a local variable from int_max function

	return 0;
}