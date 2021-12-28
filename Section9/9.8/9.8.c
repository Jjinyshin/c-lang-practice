#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���丮�� ����
// loop VS recursion

long loop_factorial(int n); // ���丮�� ������ ���� �ݺ����� ����ϴ� �Լ�
long recursive_factorial(int n); // ���丮�� ������ ���� ���ȣ���� �̿��ϴ� �Լ�

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
		return	n *= recursive_factorial(n - 1); // �̷��� return �տ��� recursive call�� �ϴ� ���� tail(end) recursion�̶�� �Ѵ�.
	}
	else
		return 1;
}